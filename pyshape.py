from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *
import sys
import time
from VectorClass import Vec2d, Vec3d

def vertexVector3f(v):
    return glVertex3f(*v)

class GraphicObject(object):
    def draw(self):
        pass

class BasicShape(GraphicObject, list):
    def __init__(self, mode=0, plst=False):
        super(BasicShape, self).__init__()
        list.__init__(self, map(Vec3d, list(plst)))
        self.mode = mode

    def draw(self):
        glBegin(self.mode)
        self.doVertex()
        glEnd()

    def doVertex(self):
        for x in self:
            vertexVector3f(x)

    def mapVertex(self):
        return map(vertexVector3f, self)


class HalfRectangle(BasicShape):    # +Z -Z +Y
    def __init__(self, pos0, pos1, plst0=(
            (0, 0, 0),
            (1, 0, 0),
            (0, 1, 0),
            (1, 1, 0),
            (0, 1, 1),
            (1, 1, 1),
            (0, 0, 1),
            (1, 0, 1),
            )):
        dif = Vec3d(pos1) - Vec3d(pos0)
        def scaler(p):
            p.x *= dif.x
            p.y *= dif.y
            p.z *= dif.z
            p += pos0
            return p
        plst = map(scaler, map(Vec3d, plst0))
        #print(list(plst))
        super(HalfRectangle, self).__init__(GL_QUAD_STRIP, plst)

class Rectangle(GraphicObject):
    def __init__(self, pos0, pos1):
        pos0 = Vec3d(pos0)
        pos1 = Vec3d(pos1)
        dif = pos1 - pos0
        plst0 = (
            (0, 0, 0),
            (1, 0, 0),
            (0, 1, 0),
            (1, 1, 0),
            (0, 1, 1),
            (1, 1, 1),
            (0, 0, 1),
            (1, 0, 1),
            )
        self.hrec0 = HalfRectangle(pos0, pos1, plst0=plst0)
        #plst0 = list(plst0)
        #plst0 = [Vec3d(*(1 if j == 0 else 0 if j == 1 else None for j in i)) for i in plst0]
        #for i in range(8):
            #t = plst0[i].z
            #a = plst0[i].x
            #plst0[i].z = 1 if a == 0 else 0 if a == 1 else None
            #plst0[i].x = 1 if t == 0 else 0 if t == 1 else None
        #for i in range(4):
            #t = plst0[i*2]
            #plst0[i*2] = plst0[i*2+1]
            #plst0[i*2+1] = t
        #for i in range(8):
            #t = plst0[i].y
            #plst0[i].y = 1 if t == 0 else 0 if t == 1 else None
        #for i in range(8):
            #t = plst0[i].z
            #plst0[i].z = 1 if t == 0 else 0 if t == 1 else None
        ##assert plst0 == \
        #[
            #(0, 1, 1),
            #(1, 1, 1),
            #(0, 0, 1),
            #(1, 0, 1),
            #(0, 0, 0),
            #(1, 0, 0),
            #(0, 1, 0),
            #(1, 1, 0),
            #]
        plst0 = (
            (0, 1, 1),
            (0, 1, 0),
            (0, 0, 1),
            (0, 0, 0),

            (1, 0, 1),
            (1, 0, 0),
            (1, 1, 1),
            (1, 1, 0),
            )
        self.hrec1 = HalfRectangle(pos0, pos1, plst0=plst0)
        #self.hrec1 = HalfRectangle(Vec3d(0,0,0), dif)
        #self.hrec1 = BasicShape(map(lambda x: x.rotate_around_x(
            #radians(180)), self.hrec1))
        #self.hrec1 = BasicShape(map(lambda x: x.rotate_around_y(
            #radians(90)), self.hrec1))
        #self.hrec1 = BasicShape(map(lambda x: x + pos0, self.hrec1))
        #self.hrec1.mode = self.hrec0.mode

    def draw(self):
        self.hrec0.draw()
        self.hrec1.draw()
