#!/usr/bin/env python
# -*- coding: utf-8 -*-

import pygame
from pygame.locals import *
from sys import exit
from random import randint
from time import sleep
 
pygame.init()
screen = pygame.display.set_mode((640, 480), 0, 32)
 
waiting = False
while True:
    if waiting is True:
        sleep(0.04)
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()

        elif event.type == KEYDOWN:
            if event.key == K_SPACE:
                waiting = not waiting
            elif event.key == 27:
                pygame.quit()
                exit()
 
    #rand_col = (randint(0, 255), randint(0, 255), randint(0, 255))
    #screen.lock()      # 很快你就会知道这两句lock和unlock的意思了
    #for _ in range(100):
        #rand_pos = (randint(0, 639), randint(0, 479))
        #screen.set_at(rand_pos, rand_col)
    #screen.unlock()

    pygame.draw.rect(screen, (255, 128, 64), (30, 30, 60, 60))
    pygame.draw.aaline(screen, (64, 128, 96), (30, 30), (180, 60), 10)
 
    pygame.display.update()
