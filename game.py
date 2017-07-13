#!/usr/bin/env python
# -*- coding: utf-8 -*-


import pygame
from pygame.locals import *
from VectorClass import Vec2d
from math import *


cursor = 'mousecursor.png'
sprite = 'fugu.png'
if True:
    background = 'sushiplate.jpg'
    screen = ((640, 480), DOUBLEBUF | NOFRAME, 32)
else:
    background = None
    screen = (1920, 1080), DOUBLEBUF | FULLSCREEN | HWSURFACE, 32


pygame.init()


screen = pygame.display.set_mode(*screen)
pygame.mouse.set_visible(False)

if background is not None: background = pygame.image.load(background).convert()
sprite = pygame.image.load(sprite).convert_alpha()
cursor = pygame.image.load(cursor).convert_alpha()

clock = pygame.time.Clock()


sprite_angle = 0
sprite_angular_speed = 0
sprite_pos = Vec2d(screen.get_size()) / 2
sprite_speed = Vec2d(0, 0)
angular_force_scale = 0.0005/2
key_force_scale = 0.001/2

pygame.event.set_allowed([QUIT, ACTIVEEVENT, KEYDOWN, KEYUP, MOUSEBUTTONDOWN, MOUSEMOTION, MOUSEBUTTONUP])

mouse_pos = pygame.mouse.get_pos()

while True:
    for event in pygame.event.get():
        if event.type == QUIT or (event.type == KEYDOWN and event.key == K_ESCAPE):
            pygame.quit()
            exit()

        if event.type == MOUSEMOTION:
            mouse_pos = event.pos

    pressed_keys = pygame.key.get_pressed()

    key_direction = Vec2d(0, 0)

    if pressed_keys[K_a]:
        key_direction.x += 1
    if pressed_keys[K_d]:
        key_direction.x -= 1
    if pressed_keys[K_w]:
        key_direction.y += 1
    if pressed_keys[K_s]:
        key_direction.y -= 1

    angular_force = 0
    if pressed_keys[K_q]:
        angular_force += angular_force_scale
    if pressed_keys[K_e]:
        angular_force -= angular_force_scale

    new_sprite = sprite

    key_force = key_direction * key_force_scale
    if angular_force != 0 or key_force != (0, 0):
        size = Vec2d(new_sprite.get_size())
        new_sprite = pygame.Surface(size).convert_alpha()
        new_sprite.blit(sprite, (0, 0))

        linelength = angular_force * 50000
        linevector = ((size.x/10, size.y/2), (size.x/10, size.y/2+linelength))
        pygame.draw.line(new_sprite, (230, 235, 240), *linevector)
        linelength = angular_force * 50000
        linevector = ((size.x*9/10, size.y/2), (size.x*9/10, size.y/2-linelength))
        pygame.draw.line(new_sprite, (230, 235, 240), *linevector)
        linelength = key_force.y * 50000
        linevector = ((size.x/2, size.y/2), (size.x/2, size.y/2-linelength))
        pygame.draw.line(new_sprite, (230, 235, 240), *linevector)
        linelength = key_force.x * 50000
        linevector = ((size.x/2, size.y/2), (size.x/2-linelength, size.y/2))
        pygame.draw.line(new_sprite, (230, 235, 240), *linevector)

    key_direction.rotate(sprite_angle)

    if pressed_keys[K_LEFT]:
        key_direction.x -= 1
    if pressed_keys[K_RIGHT]:
        key_direction.x += 1
    if pressed_keys[K_UP]:
        key_direction.y -= 1
    if pressed_keys[K_DOWN]:
        key_direction.y += 1

    key_direction.normalize_return_length()
    key_force = key_direction * key_force_scale

    if background is not None: screen.blit(background, (0, 0))
    else: screen.fill((32, 32, 32))

    rotated_sprite = pygame.transform.rotate(new_sprite, -degrees(sprite_angle))

    size = Vec2d(rotated_sprite.get_size())
    screen.blit(rotated_sprite, sprite_pos - size / 2)

    #pygame.draw.line(screen, (230, 235, 240), sprite_pos.rotated(sprite_angle), sprite_pos.rotated(sprite_angle) - linvec)
    #pygame.draw.line(screen, (230, 235, 240), (sprite_pos + sprite.get_size()).rotated(sprite_angle), (sprite_pos + sprite.get_size()).rotated(sprite_angle) + linvec)

    time_passed = clock.tick(60)

    sprite_angle += sprite_angular_speed * time_passed
    sprite_pos += sprite_speed * time_passed
    sprite_pos += key_force * time_passed**2 / 2

    sprite_angular_speed += angular_force 
    sprite_speed += key_force * time_passed

    if sprite_angle > 2*pi:
        sprite_angle -= 2*pi

    if sprite_angle < 0:
        sprite_angle += 2*pi

    screen.blit(cursor, mouse_pos)

    pygame.display.flip()
