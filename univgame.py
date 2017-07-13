#!/usr/bin/env python
# -*- coding: utf-8 -*-

import pysic
from vector import Vector3D, Vector2D, to_tuple
import pygame
from pygame.locals import *
import sys
from random import random
from math import *
import time


VECTOR3D = False
Vector = Vector3D if VECTOR3D else Vector2D

Position = Vector


class World(pysic.World):
    def show(self, screen):
        for obj in self.objlst:
            obj.show(screen)

class Object(pysic.Object):
    def show(self, screen):
        show_pix(screen, self.pos, col=self.color)


world = World()
#world.add_object(Object(mass=0, pos=Vector(48, 0, 0), spd=Vector(0, -48*16, 0)))
#world.add_object(Object(mass=1, pos=Vector(-24, 0, 0), spd=Vector(0, 24*16, 0)))
#world.add_object(Object(mass=8, pos=Vector(3, 0, 0), spd=Vector(0, -3*16, 0)))
obj2 = Object(mass=8, pos=Vector(-5, 0), spd=Vector(0, -10))
obj1 = Object(mass=8, pos=Vector(5, 0), spd=Vector(0, 10))
obj1.linknod = obj2
#obj2.linknod = obj1
#obj1.color = (255, 128, 64)
#obj2.color = (64, 128, 255)
world.add_object(obj1)
world.add_object(obj2)

def show_world(screen, dt=0):
    if dt != 0: world.move(dt)
    world.show(screen)

def quit_game():
    print('quit')
    pygame.quit()
    sys.exit()



pygame.init()

SHOW_MODE = sys.argv[1] if len(sys.argv) > 1 else 'small'

if SHOW_MODE == 'small':
    SCREEN_SIZE = (640, 480)
    BACKGROUND = 'sushiplate.jpg'
    SCREEN_ATTR = NOFRAME
elif SHOW_MODE == 'big':
    SCREEN_SIZE = (1024, 768)
    BACKGROUND = 'paltanen.jpg'
    SCREEN_ATTR = NOFRAME
elif SHOW_MODE == 'full-small':
    SCREEN_SIZE = (640, 480)
    BACKGROUND = 'sushiplate.jpg'
    SCREEN_ATTR = FULLSCREEN
elif SHOW_MODE == 'full-big':
    SCREEN_SIZE = (1024, 768)
    BACKGROUND = 'paltanen.jpg'
    SCREEN_ATTR = FULLSCREEN
elif SHOW_MODE == 'full-large' or SHOW_MODE == 'full':
    BACKGROUND = 'violet.jpg'
    SCREEN_SIZE = (1920, 1080)
    SCREEN_ATTR = FULLSCREEN
elif SHOW_MODE == 'dark':
    BACKGROUND = None
    SCREEN_SIZE = (1024, 768)
    SCREEN_ATTR = NOFRAME
elif SHOW_MODE == 'full-dark':
    BACKGROUND = None
    SCREEN_SIZE = (1920, 1080)
    SCREEN_ATTR = FULLSCREEN
else:
    BACKGROUND = None
    SCREEN_SIZE = (0, 0)
    SCREEN_ATTR = 0

if SCREEN_ATTR & FULLSCREEN: SCREEN_ATTR |= HWSURFACE
SCREEN_ATTR |= DOUBLEBUF


try:
    screen = pygame.display.set_mode(SCREEN_SIZE, SCREEN_ATTR, 32)
except(pygame.error, e):
    print('failed to create display with SIZE =', SCREEN_SIZE, 'and ATTR', SCREEN_ATTR, ':-(')
    print(e)
    sys.exit(1)

pygame.display.set_caption('Physics Benchmark')


font = pygame.font.SysFont('Arial', 16)
font_height = font.get_linesize()


if BACKGROUND is not None:
    background = pygame.image.load(BACKGROUND).convert()
    background_width, background_height = background.get_width(), background.get_height()
else:
    background = None
    background_width, background_height = screen.get_width(), screen.get_height()

mouse_image = pygame.image.load('fugu.png').convert_alpha()


screen_width, screen_height = screen.get_width(), screen.get_height()
mouse_width, mouse_height = mouse_image.get_width(), mouse_image.get_height()


ORIGXY = screen_width / 2, screen_height / 2
SCALE = 20

if VECTOR3D:
    def xyz2xy(x, y, z):
        return int(x * SCALE + ORIGXY[0]), int(y * SCALE + ORIGXY[1])
else:
    def xyz2xy(x, y):
        return int(x * SCALE + ORIGXY[0]), int(y * SCALE + ORIGXY[1])

if VECTOR3D:
    def xy2xyz(x, y):
        return (float(x) - ORIGXY[0]) / SCALE, (float(y) - ORIGXY[1]) / SCALE, 0
else:
    def xy2xyz(x, y):
        return (float(x) - ORIGXY[0]) / SCALE, (float(y) - ORIGXY[1]) / SCALE

def show_pix(screen, xyz, col=(255,255,255)):

    pos = xyz2xy(*to_tuple(xyz))
    #col = (127, 75, 127)
    screen.set_at(pos, col)


x, y = screen_width * .5 - mouse_width * .5, screen_height * .5 - mouse_height * .5
last_mouse = motion_mouse = x, y
mouse_time = None
init_mass = 1

SCRN_SCALE = (screen_width + screen_height) / (640 + 480)
TIMER_INTERVAL = 0.0010
INIT_MASS_PERC = 1.5


pygame.event.set_allowed([ACTIVEEVENT, KEYDOWN, KEYUP, MOUSEBUTTONDOWN, MOUSEMOTION, MOUSEBUTTONUP, QUIT])


while True:
    time.sleep(TIMER_INTERVAL)

    if mouse_time is not None: mouse_time += 1

    for event in pygame.event.get():
    #while True: event = pygame.event.wait()


        if event.type == QUIT:
            quit_game()


        elif event.type == KEYDOWN:

            if event.key == 27:
                quit_game()

            elif event.key == K_m:
                init_mass *= INIT_MASS_PERC

            elif event.key == K_n:
                #if init_mass <= 1: init_mass = 0
                init_mass /= INIT_MASS_PERC

            #elif event.key == K_f and event.mod & KMOD_CTRL:
                #if SCREEN_ATTR == FULLSCREEN:
                    #SCREEN_ATTR = NOFRAME
                #else:
                    #SCREEN_ATTR = FULLSCREEN
#
                #pygame.display.set_mode(SCREEN_SIZE, SCREEN_ATTR, 32)


        elif event.type == MOUSEBUTTONDOWN:# and event.button == 0:
            mouse_time = 0
            motion_mouse = last_mouse = event.pos


        elif event.type == MOUSEMOTION and event.buttons[0] == 1:
            motion_mouse = event.pos


        elif event.type == MOUSEBUTTONUP:# and event.button == 0:
            curr_mouse = event.pos
            prev_mouse = last_mouse

            cur_pos = Position(*xy2xyz(*curr_mouse))
            mot_pos = Position(*xy2xyz(*prev_mouse))
            dif_spd = (cur_pos - mot_pos) * (1 / mouse_time / TIMER_INTERVAL)

            obj = Object(mass=init_mass, pos=cur_pos, spd=dif_spd)
            print('mouse add object: ' + str(obj))
            world.add_object(obj, virtually=True if obj.mass == 0 else False)


    #screen.fill((32, 32, 32))
    screen.fill((0, 0, 0))

    if background is not None:
        dif_height = screen_height - background_height
        dif_width = screen_width - background_width
        screen.blit(background, (dif_width / 2, dif_height / 2))

    show_world(screen, TIMER_INTERVAL)

    if SCREEN_ATTR & DOUBLEBUF: pygame.display.flip()
    else: pygame.display.update()

