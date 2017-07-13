#!/usr/bin/env python
# -*- coding: utf-8 -*-

from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *
import numpy as np
from sys import argv, exit

def init():
    glClearColor(1.0, 1.0, 1.0, 1.0)

def display():
    glClear(GL_COLOR_BUFFER_BIT)
    glColor(0.0, 0.0, 0.0)

    xl = np.linspace(-2*np.pi, 2*np.pi, 100)
    yl = np.sin(xl)

    scale = 0.2
    glBegin(GL_LINE_STRIP)
    for x, y in zip(xl, yl):
        glVertex2f(x*scale, y*scale)
    glEnd()

    glFlush()

def keyboard(key, mx, my):
    if key == b'\x1b':
        exit()

def mouse(button, state, mx, my):
    pass

glutInit(argv)
glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE)
glutInitWindowSize(500, 500)
glutInitWindowPosition(100, 100)
glutCreateWindow("hitkeytest")
glutDisplayFunc(display)
glutKeyboardFunc(keyboard)
glutMouseFunc(mouse)
init()
glutMainLoop()

class ndarray:
    def __init__(self, l):
        self.l = l
