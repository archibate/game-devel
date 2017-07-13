#!/usr/bin/env python
# -*- coding: utf-8 -*-

from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *
import sys
import time

def init():
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClearDepth(1);
    glShadeModel(GL_SMOOTH);
    _ambient = [1.0,1.0,1.0,1.0];
    _diffuse = [1.0,1.0,1.0,1.0];
    _specular = [1.0,1.0,1.0,1.0];
    _position = [200,200,200,0];
    glLightfv(GL_LIGHT0,GL_AMBIENT,_ambient);
    glLightfv(GL_LIGHT0,GL_DIFFUSE,_diffuse);
    glLightfv(GL_LIGHT0,GL_SPECULAR,_specular);
    glLightfv(GL_LIGHT0,GL_POSITION,_position);
    glEnable(GL_TEXTURE_2D);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);


sys.exit()


def gldTunnelX3f(x0, y0, z0, x1, y1, z1):
    glVertex3f(x0, y0, z0)
    glVertex3f(x1, y0, z0)
    glVertex3f(x0, y1, z0)
    glVertex3f(x1, y1, z0)
    glVertex3f(x0, y1, z1)
    glVertex3f(x1, y1, z1)
    glVertex3f(x0, y0, z1)
    glVertex3f(x1, y0, z1)

    glVertex3f(x1, y0, z0)
    glVertex3f(x0, y0, z0)

def gldRectX03f(x, y0, z0, y1, z1):
    glColor3f(1.0, 0.9, 0.6)
    glVertex3f(x, y0, z0)
    glVertex3f(x, y0, z1)
    glVertex3f(x, y1, z1)
    glVertex3f(x, y1, z0)

def gldRectX13f(x, y0, z0, y1, z1):
    glColor3f(1.0, 0.6, 0.9)
    glVertex3f(x, y1, z0)
    glVertex3f(x, y1, z1)
    glVertex3f(x, y0, z1)
    glVertex3f(x, y0, z0)

def gldRectangle3f(x0, y0, z0, x1, y1, z1):
    glBegin(GL_QUAD_STRIP)
    gldTunnelX3f(x0, y0, z0, x1, y1, z1)
    glEnd()
    glBegin(GL_QUADS)
    gldRectX03f(x0, y0, z0, y1, z1)
    gldRectX13f(x1, y0, z0, y1, z1)
    glEnd()


global rotation_x, rotation_y, rotation_z
rotation_x, rotation_y, rotation_z = 0, 0, 0

from pyshape import Rectangle

def drawFunc():
    glClear(GL_COLOR_BUFFER_BIT)
    glPolygonMode(GL_FRONT, GL_FILL)
    glPolygonMode(GL_BACK, GL_LINE)
    #gldRectangle3f(-0.6, -0.6, -0.6, 0.6, 0.6, 0.6)
    Rectangle((-0.6, -0.6, -0.6), (0.6, 0.6, 0.6)).draw()

    glColor3f(1.0, 0.9, 0.6)
    glutSolidTeapot(0.5)
    glColor3f(0.4, 0.8, 1.0)
    glutWireTeapot(0.5)

    glFlush()

def idleFunc():
    global rotation_x, rotation_y, rotation_z
    glRotatef(0.5, rotation_x, rotation_y, rotation_z)
    drawFunc()
    time.sleep(0.004)

def keyboardFunc(key, x, y):
    global rotation_x, rotation_y, rotation_z
    if key == b'\x1b':
        sys.exit()
    elif key == b'q':
        rotation_z += 1
    elif key == b'e':
        rotation_z -= 1
    elif key == b'a':
        rotation_y += 1
    elif key == b'd':
        rotation_y -= 1
    elif key == b's':
        rotation_x += 1
    elif key == b'w':
        rotation_x -= 1

glutInit()
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA)
glutInitWindowSize(400, 400)
glutInitWindowPosition(0, 0)
glutCreateWindow("Teapot")
glViewport(0, 0, 400, 400)
#glRotatef(-90, 1, 0, 0)
gluOrtho2D(-1.0, 1.0, -1.0, 1.0)
glClearColor(0.0, 0.0, 0.0, 1.0)
glutDisplayFunc(drawFunc)
glutKeyboardFunc(keyboardFunc)
glutIdleFunc(idleFunc)
glutMainLoop()
