import pygame.draw
from VectorClass2d import Vec2d
from pygase import GraphicElement

class GObjectIntf(GraphicElement):
    def __init__(self, pos, size):
        super(GObjectIntf, self).__init__(pos, size)

    def draw(self):
        pass

def unconvert_pos(pos):
    return Vec2d(float(pos[0]), float(pos[1]))

def convert_pos(pos):
    return Vec2d(round(pos[0]), round(pos[1]))

def convert_radius(radius):
    return round(radius)

def default_prefill_rect(screen, rect):
    print('default_prefill_rect')
    pygame.draw.rect(screen, (0, 0, 0), rect)

class GSimpleObject(GObjectIntf):
    def __init__(self, pos, size):
        super(GSimpleObject, self).__init__(pos, size)

    @property
    def lvrect(self):
        return self.rect

    def predraw(self, prefunc):
        #if not self.changed: return True; else:
        prefill_rect = prefunc
        return prefill_rect(self.screen, self.lvrect)

GGraphicObjectIntf = GSimpleObject

class GPhysic2DObject(GGraphicObjectIntf):
    def __init__(self, pos, size, color=None, speed=Vec2d(0,0), mass=0):
        super(GPhysic2DObject, self).__init__(pos, size)
        self.color = color
        self.speed = Vec2d(speed)
        self.mass = mass
        self.posit = self.pos
        self._lvrect = None

    @property
    def pos(self):
        return convert_pos(self.posit)

    @pos.setter
    def pos(self, pos):
        self.posit = unconvert_pos(pos)

    def movedv(self, dt, dv=Vec2d(0, 0)):
        self.posit += (self.speed + dv * dt / 2) * dt
        self.speed += dv

    def moveforce(self, dt, force=Vec2d(0, 0)):
        self.movedv(dt, dforce / self.mass if dforce else 0)

    def timetick(self, time_passed):
        super(GPhysic2DObject, self).timetick(time_passed)
        self.movedv(time_passed / 1000)

    @property
    def lvrect(self):
        return self._lvrect

    def save_lvrect(self):
        self._lvrect = self.rect

    def draw(self):
        self.save_lvrect()

class GSimplePhysic2DCircle(GPhysic2DObject):
    def __init__(self, pos, radius, color=None, speed=Vec2d(0, 0)):
        dis = radius * 2
        size = (dis, dis)
        super(GSimplePhysic2DCircle, self).__init__(pos, size, color, speed)
        self.radius = radius
        self._lvrect = self.rect

    @property
    def size(self):
        dis = self.radius * 2
        return Vec2d(dis, dis)

    @size.setter
    def size(self, size):
        assert size[0] == size[1]
        self.radius = size[0]/2

    def draw(self):
        super(GSimplePhysic2DCircle, self).save_lvrect()
        pygame.draw.circle(self.screen, self.color,
                convert_pos(self.pos), convert_radius(self.radius))

    def movedv(self, dt, dv=Vec2d(0, 0)):
        dv += Vec2d(0, 0.4)
        super(GSimplePhysic2DCircle, self).movedv(dt, dv)
