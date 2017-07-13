#!/usr/bin/env python
# -*- coding: utf-8 -*-

from pygase import *
from VectorClass import Vec2d, Vec3d
from math import *
from random import randint


def average(x, y, factor=.5):
    return x * factor + y * (1 - factor)

def perspec_linear_size(r, pos, d):
    x, y, z = pos
    if z <= 0: return None
    d /= z
    return r * d

def perspec_fisheye_size(r, pos, d):
    x, y, z = pos
    z *= pos.get_length()
    if z <= 0: return None
    d /= sqrt(z)
    return r * d

def perspec_fishhighd_size(r, pos, d):
    x, y, z = pos
    l = z**3 * pos.length**2
    if l <= 0: return None
    d /= l**(1/5)
    return r * d

def perspec_size(r, pos, d):
    a = perspec_linear_size(r, pos, d)
    b = perspec_fisheye_size(r, pos, d)
    return average(a, b, .8) if a is not None and b is not None else None

def perspec_convert2d(pos, d):
        return perspec_size(Vec2d(pos.x, pos.y), pos, d)



class BasicObject():

    def __init__(self, pos, spd, mass):
        self.pos = Vec3d(pos)
        self.spd = Vec3d(spd)
        self.mass = mass

    def moveforce(self, dt, force=Vec3d(0,0,0)):
        self.movedv(force / self.mass)

    def movedv(self, dt, dv=Vec3d(0,0,0)):
        self.pos += (self.spd + dv * dt / 2) * dt
        self.spd += dv


def average_color(col1, col2, factor):
    def average(xy):
        return xy[0] * factor + xy[1] * (1 - factor)

    return tuple(map(average, zip(col1, col2)))


class BallObject(RenderElement, BasicObject):

    def __init__(self, gl, pos, spd, mass, radius=1, color=(10, 10, 10),
            refactor=0.5, refscale=0.3, reforgpos=0.9, bounceness=12):
        super(BallObject, self).__init__()
        self.gl = gl
        BasicObject.__init__(self, pos, spd, mass)
        self.radius = radius
        self._color = color
        self.refactor = refactor
        self.refscale = refscale
        self.reforgpos = reforgpos
        self.bounceness = bounceness
        self.last_vpos = (0, 0)
        self.last_vradius = 0

    @property
    def color(self):
        factor = tanh(self.pos.z/190)*.5+.5
        return average_color(self._color, (222, 68, 32), factor)

    def movedv(self, dt, dv=0):
        self.last_pos = self.pos
        super(BallObject, self).movedv(dt, dv)

    def paint(self):
        self.gl.prerend3d(self)

    def render(self, screen):
        self.gl.dorend3d(self)


class GL():

    def __init__(self, screen,
            camera=BasicObject((0, 0, 0), (0, 0, 0), 0),
            viewdist=770, orig2d=None):
        self.screen = screen
        self.camera = camera
        self.viewdist = viewdist
        self.orig2d = orig2d if orig2d is not None else \
                Vec2d(self.screen.get_size()) / 2

    def convert2d(self, pos):
        pos = perspec_convert2d(pos - self.camera.pos, self.viewdist)
        if pos is None: return None
        return self.orig2d_convert(pos)

    def orig2d_convert(self, pos):
        return pos + self.orig2d

    def draw2d_ball(self, obj, pos2d, radius):
        if radius is None or pos2d is None \
                or radius <= 0 or radius >= 600: return
        radiusi = int(radius)
        pos2di = Vec2d(round(pos2d[0]), round(pos2d[1]))
        pygame.draw.circle(self.screen, obj.color, pos2di, radiusi)
        color = average_color(obj.color, (255, 255, 255), 1-obj.refactor)
        pos2d += Vec2d(radius, 0).rotated(-0.785) * (obj.reforgpos-obj.refscale)
        pos2di = Vec2d(round(pos2d[0]), round(pos2d[1]))
        radius *= obj.refscale
        radiusi = int(radius)
        pygame.draw.circle(self.screen, color, pos2di, radiusi)

    def unrendclean(self, obj):
        lvradius = obj.last_vradius
        lvradius = Vec2d(lvradius, lvradius)
        rect = Rect(obj.last_vpos - lvradius, lvradius * 2)
        pygame.draw.rect(self.screen, (0, 0, 0), rect)

    def unrend_rect2(self, rec1, rec2, isball=False):
        def rect(rec):
            pygame.draw.rect(self.screen, (0, 0, 0), rec)
        def rece(*r):
            return rect(Rect(*r))
        #if isball:pygame.draw.rect(self.screen,(0,0,0),rec1);return
        if rec1.left <= rec2.left:
            rece(rec1.left, min(rec1.top, rec2.top), \
                    rec2.left - rec1.left, max(rec1.height, rec2.height))
        if rec1.top <= rec2.top:
            rece(min(rec1.left, rec2.left), rec1.top, \
                    max(rec1.width, rec2.width), rec2.top - rec1.top)
        if rec1.right >= rec2.right:
            rece(rec2.right, min(rec1.top, rec2.top), \
                    rec1.right - rec2.right, max(rec1.height, rec2.height))
        if rec1.bottom >= rec2.bottom:
            rece(min(rec1.left, rec2.left), rec2.bottom, \
                    max(rec1.width, rec2.width), rec1.bottom - rec2.bottom)
        #y1, y2 = min(rec1.top, rec2.top), max(rec1.top, rec2.top)
        #x1, x2 = min(rec1.left, rec2.left), max(rec1.left, rec2.left)
        #p1, p2 = (x1, y1), (x2, y2)
        #ra = Rect(p1, p2)
        #pygame.draw.rect(self.screen, (0, 0, 0), rec)

    def unrendlv(self, obj, npos, nradius):
        vdif = npos - obj.last_vpos
        raddif = nradius - obj.last_vradius
        difval = vdif.length - raddif
        if difval < 0: return
        #Rect(obj.last_vpos, (vdif.x - raddif, obj.last_vradius))
        #Rect(obj.last_vpos, (vdif.x - raddif, obj.last_vradius))
        lvrad = obj.last_vradius
        lvpos = obj.last_vpos
        def mkrec(vp,vr):vr=Vec2d(vr,vr);return Rect(*(vp-vr),*(2*vr))
        self.unrend_rect2(mkrec(lvpos, lvrad+1), mkrec(npos, nradius), True)

    def prerend3d(self, obj):
        pos2d = self.convert2d(obj.pos)
        if pos2d is None:
            pos2d = Vec2d(self.screen.get_size()) / 2
        radius = perspec_size(obj.radius, obj.pos, self.viewdist)
        if radius is None:
            radius = max(self.screen.get_width(), self.screen.get_height())
        self.unrendlv(obj, pos2d, radius)
        obj.last_vradius = radius
        obj.last_vpos = Vec2d(pos2d)
        obj.curr_vradius = radius
        obj.curr_vpos = pos2d

    def dorend3d(self, obj):
        self.draw2d_ball(obj, obj.curr_vpos, obj.curr_vradius)

    def ropaints(self, objects):
        self.screen.fill((0, 0, 0))
        for obj in objects:
            obj.paint()


class Game(Application):

    def __init__(self, display=((1024, 768), NOFRAME | DOUBLEBUF, 32),
            frameps=60):
        super(Game, self).__init__(display=display,
                frameps=frameps, app_name="PYG3D Game")

    def add_element(self, e):
        #print('add_element')
        lst = list(self.elements)
        lst.reverse()
        z = e.pos.z
        idx = 0
        for obj in lst:
            if z > obj.pos.z:
                break
            idx += 1
        self.elements.insert(-idx-1, e)

    def maininit(self):
        super(Game, self).maininit()

        self.gl = GL(self.screen, viewdist=200)

        self.grav_const = -100
        ball0 = BallObject(self.gl, (140, -70, 300), (0, -10, 0),
                100, radius=6, color=(180, 190, 50))
        self.add_element(ball0)
        ball0 = BallObject(self.gl, (-220, -70, 300), (0, 40, 0),
                20, radius=6, color=(180, 190, 50))
        self.add_element(ball0)
        ball0 = BallObject(self.gl, (-200, -70, 300), (0, -36, 0),
                0.01, radius=3, color=(30, 100, 190))
        self.add_element(ball0)

        ball0 = BallObject(self.gl, (0, 0, 50), (0, 0, 12000),
                1, radius=50, color=(180, 190, 50))
        self.add_element(ball0)
        ball0 = BallObject(self.gl, (0, -200, 700), (5, 100, 7),
                10, radius=50, color=(180, 190, 50))
        #self.add_element(ball0)
        ball0 = BallObject(self.gl, (0, 200, 700), (-10, -100, -14),
                10, radius=50, color=(180, 190, 50))
        #self.add_element(ball0)
        ball0 = BallObject(self.gl, (0, 200, 700), (-10, -100, -14),
                1000000, radius=100, color=(64, 64, 64), bounceness=-222,
                refactor=1, reforgpos=0.93, refscale=0.15)
        #self.add_element(ball0)
        if False:
            deg = radians(10)
            for x in range(-50, 50):
                x *= 32
                ball0 = BallObject(self.gl, (x*cos(deg), 0,
                    700+x*sin(deg)), (0, 0, -400), 10,
                        color=(180, 190, 50), radius=12)
                self.add_element(ball0)

        self.screen.fill((0, 0, 0))

    def timetick(self, time_passed):
        for i in range(4):
            self.move_world(time_passed / 1000)
        super(Game, self).timetick(time_passed)

    def case_event(self, event):
        if event.type == KEYDOWN:
            if event.key == K_ESCAPE:
                self.__quit__()
            elif event.key == K_w:
                self.grav_const *= 1.414
            elif event.key == K_s:
                self.grav_const /= 1.414

        super(Game, self).case_event(event)

    def paint(self):
        self.gl.ropaints(self.elements)

    def readd_random(self):
        #from time import sleep
        #sleep(1)
        #self.__quit__()##
        print('readd')
        if len(self.elements) > 10:
            return
        w, h = self.screen.get_size()
        s = w*h/self.gl.viewdist
        camz = self.gl.camera.pos.z
        z = randint(int(s*.4), int(s*.9))
        sca = z/self.gl.viewdist; sca += 1; sca /= 6
        pos = (randint(int(-w*sca), int(w*sca)),
                randint(int(-h*sca), int(h*sca)),
                camz + z)
        ball = BallObject(self.gl, pos, (randint(-600,600),randint(-600,600),-1200+randint(-600,600)), randint(1, 40),
            color=(180, 190, 50), radius=30, bounceness=30)
        self.add_element(ball)
        #if randint(0, 50) == 0 and False:
            #print('readd big-ball')
            #ball0 = BallObject(self.gl, (0, 200, 700), (-10, -100, -14),
                    #5000, radius=100, color=(64, 64, 64), bounceness=-222,
                    #refactor=1, reforgpos=0.93, refscale=0.15)
            #self.add_element(ball0)
        z = randint(int(s*.4), int(s*.9))
        sca = z/self.gl.viewdist; sca += 1; sca /= 6
        pos = (randint(int(-w*sca), int(w*sca)),
                randint(int(-h*sca), int(h*sca)),
                camz + z)
        ball = BallObject(self.gl, pos, (randint(-600,600),randint(-600,600),-1200+randint(-600,600)), randint(1, 40),
            color=(180, 190, 50), radius=30, bounceness=30)
        self.add_element(ball)

    def remove_if_out(self, obj):
        z = obj.pos.z - self.gl.camera.pos.z
        w, h = self.screen.get_size()
        s = w*h/self.gl.viewdist
        if z <= s*0 or z > s*5:
            #self.gl.unrendclean(obj)
            self.gl.prerend3d(obj)
            self.remove_element(obj)
            self.readd_random()

    def move_world(self, dt):
        objects = list(self.elements)
        for obj in objects:
            #obj.movedv(dt); continue
            dv = 0
            for other in self.elements:
                if other is obj: continue
                dis = obj.pos - other.pos
                distance = dis.normalize_return_length()
                if distance == 0:
                    continue
                    ##raise ZeroDivisionError('distance is zero')
                # F=G*m1*m2/d^2
                dv += self.grav_const * dis * other.mass / distance**2

                if obj.mass != 0:
                    radius_diff = other.radius + obj.radius
                    bounce_diff = radius_diff - distance
                    if bounce_diff >= 0:
                        dv += dis * (radius_diff / \
                                (distance + obj.spd*dt/3) - 1) \
                                        * other.bounceness \
                                        * obj.bounceness / obj.mass
                        #print('ping!')

            obj.movedv(dt, dv)

        self.elements = objects
        for obj in self.elements:
            self.remove_if_out(obj)
        #print(self.elements)


if __name__ == '__main__':

    from sys import argv

    g = None
    fps=10
    if len(argv) > 1:
        if len(argv) > 2:
            fps = int(argv[2])

        if argv[1] == 'full-large':
            g = Game(display=((1920, 1080),
                FULLSCREEN | HWSURFACE | DOUBLEBUF, 32),
                frameps=fps)
        elif argv[1] == 'full-big':
            g = Game(display=((1024, 768),
                FULLSCREEN | HWSURFACE | DOUBLEBUF, 32),
                frameps=fps)
        elif argv[1] == 'big':
            g = Game(display=((1024, 768),
                NOFRAME | DOUBLEBUF, 32),
                frameps=fps)
        elif argv[1] == 'small':
            g = Game(display=((640, 480),
                NOFRAME, 32),
                frameps=fps)
        else:
            g = Game(frameps=fps)

    if g is None: g = Game()
    g.run()
