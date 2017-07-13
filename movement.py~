#!/usr/bin/env python
# -*- coding: utf-8 -*-

background = 'sushiplate.bmp'
sprite = 'fugu.bmp'
 
import pygame
from pygame.locals import *
from sys import exit
from time import sleep
 
pygame.init()
 
#screen = pygame.display.set_mode((640, 480), DOUBLEBUF, 32)
screen = pygame.display.set_mode((1920, 1080), DOUBLEBUF | FULLSCREEN | HWSURFACE, 32)
 
background = pygame.image.load(background).convert()
sprite = pygame.image.load(sprite)

clock = pygame.time.Clock()


class Coor(tuple):

    def __init__(self, *l):
        self = (*l,)

    def __add__(a, b):
        return type(a)(map(lambda x: x[0] + x[1], zip(a, b)))

    def __sub__(a, b):
        return type(a)(map(lambda x: x[0] - x[1], zip(a, b)))

    def __mul__(a, k):
        return type(a)(map(lambda x: x * k, a))

    def tuple(self):
        return tuple(map(int, self))


pos = Coor((screen.get_width() / 2, screen.get_height() / 2))
speed = Coor((0.4, 0.3))*6

while True:

    sleep(1/100)

    for event in pygame.event.get():

        if event.type == QUIT:
            pygame.quit()
            exit()

        elif event.type == KEYDOWN:
            if event.key == 27:
                pygame.event.post(pygame.event.Event(QUIT, message='Keyboard Esc'))


    time_passed = clock.tick()
    pos += speed * time_passed

    if pos[0] <= 0 or pos[0] > screen.get_width() - sprite.get_width():
        #pos = Coor((screen.get_width(), pos[1]))
        speed = Coor((-speed[0], speed[1]))

    if pos[1] <= 0 or pos[1] > screen.get_height() - sprite.get_height():
        #pos = Coor((poss[0], screen.get_height()))
        speed = Coor((speed[0], -speed[1]))


    #screen.blit(background, ((screen.get_width() - background.get_width()) / 2, (screen.get_height() - background.get_height()) / 2))

    p = p0 = pos# - Coor((sprite.get_width() / 2, sprite.get_height() / 2))
    screen.blit(sprite, tuple(p))
    p = p0 + (screen.get_width(), screen.get_height())
    screen.blit(sprite, tuple(p))
    p = p0 + (-screen.get_width(), screen.get_height())
    screen.blit(sprite, tuple(p))
    p = p0 + (screen.get_width(), -screen.get_height())
    screen.blit(sprite, tuple(p))
    p = p0 + (-screen.get_width(), -screen.get_height())
    screen.blit(sprite, tuple(p))
    p = p0 + (screen.get_width(), 0)
    screen.blit(sprite, tuple(p))
    p = p0 + (-screen.get_width(), 0)
    screen.blit(sprite, tuple(p))
    p = p0 + (0, screen.get_height())
    screen.blit(sprite, tuple(p))
    p = p0 + (0, -screen.get_height())
    screen.blit(sprite, tuple(p))
    p = p0 + (screen.get_width(), 0)
    screen.blit(sprite, tuple(p))
    p = p0 + (-screen.get_width(), 0)
    screen.blit(sprite, tuple(p))
    p = p0 + (0, screen.get_height())
    screen.blit(sprite, tuple(p))
    p = p0 + (0, -screen.get_height())
    screen.blit(sprite, tuple(p))

    pygame.display.flip()
