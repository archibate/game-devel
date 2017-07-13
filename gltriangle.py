from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *
from math import *
from time import sleep

def display():
    glClearColor(0.0, 0.0, 0.0, 0.0)
    glClear(GL_COLOR_BUFFER_BIT)
    glBegin(GL_TRIANGLES)
    glColor3f(1.0, 0.0, 0.0)
    degs, size = 30, 1.0
    glVertex2f(size * -cos(radians(degs)), size * -sin(radians(degs)))
    glColor3f(0.0, 1.0, 0.0)
    glVertex2f(size * cos(radians(degs)), size * -sin(radians(degs)))
    glColor3f(0.0, 0.0, 1.0)
    glVertex2f(0.0, size)
    glEnd()
    glFlush()

def idle():
    sleep(0.004)
    display()

glutInit()
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA)
glutInitWindowSize(500, 500)
glutCreateWindow("Triangle using OpenGL")
glutDisplayFunc(display)
glutIdleFunc(idle)
glutMainLoop()
