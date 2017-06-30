#!/usr/bin/env python
# -*- coding: utf-8 -*-

from math import *
from vector import Vector3D, Vector2D, VectorND, to_tuple



INIT_VECTOR = Vector2D(0, 0)
Vector = Vector2D


class World:

    def __init__(self, objlst=[]):
        self.objlst = objlst
        self.sobjlst = tuple()
        #self.sobjlst = tuple(objlst)

    def add_object(self, obj, virtually=False):
        if not virtually: self.sobjlst = (*self.sobjlst, obj)
        self.objlst.append(obj)

    def move(self, dt):
        self.sobjlst = tuple(self.objlst)
        for obj in self.objlst:
            obj.move(dt, self)

    def grav_acc_to(self, obj):
        acc = INIT_VECTOR
        for i in self.sobjlst:
            if i is not obj:
                dis = i.pos - obj.pos
                distance = dis.abs()
                acc += dis * (i.mass / distance*distance*distance)
        return acc

    def __str__(self):
        return 'WORLD with ' + \
                reduce(lambda x, y: x + ', ' + y, map(str, self.objlst)) \
                if self.objlst else 'NOTHING'


class Object:

    def __init__(self, mass=0, pos=INIT_VECTOR, spd=INIT_VECTOR, linknod=None):
        self.mass = mass
        self.pos, self.spd = pos, spd
        self.linknod = linknod
        self.color = (255, 255, 255)

    def __str__(self):
        return 'OBJ with MASS ' + str(self.mass) \
                + ' at POS' + str(self.pos) \
                + ' with SPD' + str(self.spd)

    def speed_average(spd1, spd2, factor):
        return spd1 * factor - spd1 * (1-factor)

    def speed_up_with(self, his_mass, dot_spd):
        type(self).speed_average(self.spd, dot_spd, his_mass / self.mass)

    def forced(self, force):
        self.spd += force * (1/self.mass)

    def speed_move(self, dt):
        self.pos += self.spd * dt

        if self.linknod is not None:

            o1 = self.linknod
            o2 = self

            q1 = o1.pos
            q2 = o2.pos
            dq = q2 - q1
            dqang = dq.angle()

            v1 = o1.spd
            v2 = o2.spd
            dv = v2 - v1

            o1.forced((v1 - v2).dot_shadow_un(dqang))
            o2.forced((v2 - v1).dot_shadow_un(dqang))

            #f1 = v1.dot_shadow_un(dqang)
            #f2 = v2.dot_shadow_un(dqang)

            #print('v1,v2=', v1, v2, 'f1,f2=', f1, f2, 'dqang=', dqang)

            #df = f2 - f1

            #o1.forced(df)


            #linknod = self.linknod
            #dis = self.pos - lnd.pos
            #r = dis.abs()
            #spdif = self.spd - linknod.spd
            #linknod.forced(dis)
            #self.linknod.spd.dot_product(self.pos - self.linknod.pos)
            #self.linknod.speed_up_with(self.mass, self.spd.dot_product(self.pos - self.linknod.pos))

    def move(self, dt, world=None):
        self.speed_move(dt)
        acc = world.grav_acc_to(self) * dt
        self.spd += acc

    def speed_follow(self, obj, dt, acv):
        acc = (self.pos - obj.pos).absolutely() * acv
        self.spd += acc


if __name__ == '__main__':

    import pygame
    from pygame.locals import QUIT, KEYDOWN, NOFRAME, FULLSCREEN, HWSURFACE
    import sys
    from time import sleep

    pygame.init()
    #screen = pygame.display.set_mode((640, 480), 0, 32)
    screen = pygame.display.set_mode((1024, 768), NOFRAME, 32)

    world = World()
    obj1 = Object(mass=1, pos=Vector(24, 0), spd=Vector(0, 50))
    obj2 = Object(mass=3, pos=Vector(-8, 0), spd=Vector(0, 0))
    world.add_object(obj1)
    world.add_object(obj2)

    def to_view(x, y):
        return int(x * SCALE + screen.get_width() / 2), int(y * SCALE + screen.get_height() / 2)

    SCALE = 5
    TIMER_INTERVAL = .0010
    MISSUE_ACV = -10*300
    while True:
        sleep(TIMER_INTERVAL)
        for event in pygame.event.get():
            if event.type == QUIT or (event.type == KEYDOWN and event.key == 27):
                pygame.quit()
                sys.exit()

        dis = (obj1.pos - obj2.pos).abs()
        dis = 1/dis/dis/dis
        obj1.speed_follow(obj2, dt=TIMER_INTERVAL, acv=MISSUE_ACV * dis)
        obj1.speed_move(dt=TIMER_INTERVAL)
        screen.fill((32, 32, 32))
        screen.set_at(to_view(*to_tuple(obj1.pos)), (255, 255, 255))
        screen.set_at(to_view(*to_tuple(obj2.pos)), (255, 255, 255))
        pygame.display.update()
