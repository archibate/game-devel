#!/usr/bin/env python
# -*- coding: utf-8 -*-

import pysic
import pygame
from pygame.locals import *
import sys
from random import random
from math import *
import time


Vector = pysic.Vector3D

class World(pysic.World):
    def show(self, screen):
        for obj in self.objlst:
            obj.show(screen)

class Object(pysic.Object):
    def show(self, screen):
        show_at(self.pos)


def show_at(pos):
    x, y, z = (*pos.to_list(),)


world = World()
world.add_object(Object(mass=1, pos=Vector(12, 0, 0), spd=Vector(0, 0, 0)))
world.add_object(Object(mass=4, pos=Vector(4, 0, 0), spd=Vector(0, 0, 0)))

def show_world(screen):
    world.show(screen)


#pygame.mixer.pre_init(44100, 16, 2, 4096)
pygame.init()

#ping_sound = pygame.mixer.Sound("resource/bounce.wav")
#pong_sound = pygame.mixer.Sound("resource/bounce.wav")

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
elif SHOW_MODE == 'full-large' or 'full':
    BACKGROUND = 'violet.jpg'
    SCREEN_SIZE = (1920, 1080)
    SCREEN_ATTR = FULLSCREEN
else:
    SCREEN_SIZE = (0, 0)
    BACKGROUND = None
    SCREEN_ATTR = 0


screen = pygame.display.set_mode(SCREEN_SIZE, SCREEN_ATTR, 32)
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


def quit_game():
    print('quit')
    pygame.quit()
    sys.exit()

screen_width, screen_height = screen.get_width(), screen.get_height()
mouse_width, mouse_height = mouse_image.get_width(), mouse_image.get_height()

x, y = screen_width * .5 - mouse_width * .5, screen_height * .5 - mouse_height * .5
last_x, last_y = x, y
speed_x, speed_y = 0, 0
force_x, force_y = 0, 0
mouse_time = None

SCALE = (screen_width + screen_height) / (640 + 480)
TIMER_INTERVAL = 0.0008
SLOW_INTERVAL = 6
FORCE_ONCE = 0.025 * SCALE
SPEED_SCALE = 1.5   # or 0.05 / TIMER_INTERVAL
#SLOW_PERC = 1
#GRAVITY_FORCE = 0
#BOUNCINESS_PERC = 1
#RAND_SCALE = 0
SLOW_PERC = 0.994
GRAVITY_FORCE = 0.4 * FORCE_ONCE    # or 0.01 or 0.001
BOUNCINESS_PERC = 0.67
RAND_SCALE = 0.01

slow_i = SLOW_INTERVAL


while True:
    time.sleep(TIMER_INTERVAL)

    if mouse_time is not None:
        mouse_time += 1

    for event in pygame.event.get():
    #while True: event = pygame.event.wait()


        def randval():
            r = random() * 2 - 1
            return sinh(r)


        def get_xy(pos):

            x, y = pos

            x -= mouse_width / 2
            y -= mouse_height / 2

            if x <= 0: x = 0
            elif x >= screen_width - mouse_width:
                x = screen_width - mouse_width
            if y <= 0: y = 0
            elif y >= screen_height - mouse_height:
                y = screen_height - mouse_height

            return x, y


        if event.type == QUIT:
            quit_game()

        elif event.type == KEYDOWN:

            if event.key == 27:
                quit_game()

            if event.key == K_UP:
                force_y = -FORCE_ONCE
            elif event.key == K_DOWN:
                force_y = FORCE_ONCE
            elif event.key == K_LEFT:
                force_x = -FORCE_ONCE
            elif event.key == K_RIGHT:
                force_x = FORCE_ONCE

        elif event.type == KEYUP:
            force_x = 0
            force_y = 0

        elif event.type == MOUSEBUTTONDOWN:

            x, y = get_xy(event.pos)

            mouse_time = 0

            last_x, last_y = x, y
            speed_x, speed_y = 0, 0

        elif event.type == MOUSEMOTION:

            if mouse_time is not None:
                x, y = get_xy(event.pos)

        elif event.type == MOUSEBUTTONUP:

            #last_x, last_y = x, y
            x, y = get_xy(event.pos)

            speed_x += (x - last_x) * SPEED_SCALE / mouse_time
            speed_y += (y - last_y) * SPEED_SCALE / mouse_time
            #x, y = last_x, last_y

            mouse_time = None


    gravity_force = GRAVITY_FORCE if not y >= screen_height - mouse_height else 0

    if mouse_time is None:
        speed_x += force_x
        speed_y += force_y + GRAVITY_FORCE
        x += speed_x
        y += speed_y

    slow_i -= 1
    if slow_i <= 0:
        speed_x *= SLOW_PERC
        speed_y *= SLOW_PERC
        slow_i = SLOW_INTERVAL

    #def play_bounce_sound(name):
        #sound = pong_sound if name == 'pong' else ping_sound
        #channel = sound.play(0, 1)
        #if channel is None:
            #raise FileNotFoundError('failed to create channel')
        #right = x / screen_width
        #left = 1 - right
        #channel.set_volume(left, right)

    if x <= 0 or x >= screen_width - mouse_width:
        #play_bounce_sound('ping')
        speed_x = -speed_x * ((1 + RAND_SCALE * randval()) if RAND_SCALE != 0 else 1) * BOUNCINESS_PERC
    if y <= 0 or y >= screen_height - mouse_height:
        #play_bounce_sound('pong')
        speed_y = -speed_y * ((1 + RAND_SCALE * randval()) if RAND_SCALE != 0 else 1) * BOUNCINESS_PERC

    if x <= 0: x = 0
    elif x >= screen_width - mouse_width:
        x = screen_width - mouse_width
    if y <= 0: y = 0
    elif y >= screen_height - mouse_height:
        y = screen_height - mouse_height


    if background is not None:
        dif_height = screen_height - background_height
        dif_width = screen_width - background_width
        screen.blit(background, (dif_width / 2, dif_height / 2))
    else:
        screen.fill((32, 32, 32))

    screen.blit(mouse_image, (x, y))

    show_world(screen)

    pygame.display.update()
