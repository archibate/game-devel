#!/usr/bin/env python
# -*- coding: utf-8 -*-

from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *
import sys

global W, H, R
W, H, R = 500, 500, 1.0
 
def init():
    glClearColor(0.0, 0.0, 0.0, 1.0)
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0)

    glEnable(GL_CULL_FACE)

def reshapeFunc(w, h):
    if h <= 0:
        h = 1
    glViewport(0, 0, w, h)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    if w <= h:
        gluOrtho2D(-R, R, -R * h / w, R * h / w)
    else:
        gluOrtho2D(-R * w / h, R * w / h, -R, R)
    glMatrixMode(GL_MODELVIEW)
    glLoadIdentity()
    W, H = w, h
    drawFunc()

def keyboardFunc(key, x, y):
    if key == chr(27):
        sys.exit()

def drawFunc():
    glClear(GL_COLOR_BUFFER_BIT)
 
    glColor3f(1.0, 1.0, 1.0)
    glBegin(GL_LINES)
    glVertex2f(-1.0, 0.0)
    glVertex2f(1.0, 0.0)
    glVertex2f(0.0, 1.0)
    glVertex2f(0.0, -1.0)
    glEnd()
 
    glPointSize(5.0)
    glBegin(GL_POINTS)
    glColor3f(1.0, 0.0, 0.0)
    glVertex2f(0.3, 0.3)
    glColor3f(0.0, 1.0, 0.0)
    glVertex2f(0.6, 0.6)
    glColor3f(0.0, 0.0, 1.0)
    glVertex2f(0.9, 0.9)
    glEnd()
 
    glColor3f(1.0, 1.0, 0)
    glCullFace(GL_BACK)
    glBegin(GL_QUADS)
    glVertex2f(-0.2, 0.2)
    glVertex2f(-0.2, 0.5)
    glVertex2f(-0.5, 0.5)
    glVertex2f(-0.5, 0.2)
    glEnd()
 
    glColor3f(0.0, 1.0, 1.0)
    glPolygonMode(GL_FRONT, GL_LINE)
    glPolygonMode(GL_BACK, GL_FILL)
    glBegin(GL_POLYGON)
    glVertex2f(-0.5, -0.1)
    glVertex2f(-0.8, -0.3)
    glVertex2f(-0.8, -0.6)
    glVertex2f(-0.5, -0.8)
    glVertex2f(-0.2, -0.6)
    glVertex2f(-0.2, -0.3)
    glEnd()
 
    glPolygonMode(GL_FRONT, GL_FILL)
    glPolygonMode(GL_BACK, GL_LINE)
    glBegin(GL_POLYGON)
    glVertex2f(0.5, -0.1)
    glVertex2f(0.2, -0.3)
    glVertex2f(0.2, -0.6)
    glVertex2f(0.5, -0.8)
    glVertex2f(0.8, -0.6)
    glVertex2f(0.8, -0.3)
    glEnd()
 
    glFlush()
 
glutInit(sys.argv)
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA)
glutInitWindowSize(W, H)
glutCreateWindow("Second")
 
glutDisplayFunc(drawFunc)
glutReshapeFunc(reshapeFunc)
glutKeyboardFunc(keyboardFunc)
init()
glutMainLoop()
