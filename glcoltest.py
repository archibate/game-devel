from OpenGL.GLUT import *
from OpenGL.GL import *
import sys

blue=(0.0,0.0,1.0)
green=(0.0,1.0,0.0)
red=(1.0,0.0,0.0)
color=blue

def display():
    glClearColor(0.0,0.0,0.0,0.0)  #背景色=黑色，RGBA全为0
    glClear(GL_COLOR_BUFFER_BIT)   #清除颜色缓冲区
    glColor3fv(color)              #设置下面绘制物体的颜色
                        #f表示参数类型为浮点类型，v表示接受的参数为数组形式
    glRectf(-2.0,-2.0,2.0,2.0)
    glFlush()

def reshape(winx,winy):
    glViewport(0,0,winx,winy)      #定义相对视窗大小（像素范围）
    glMatrixMode(GL_PROJECTION)    #选择投影矩阵
    glLoadIdentity()               #读取规范化的单位矩阵
    glOrtho(-100.0,100.0, -100.0,100.0, 0.0,100.0)
                                   #定义空间坐标系范围
    glMatrixMode(GL_MODELVIEW)     #选择模型视图矩阵
    glLoadIdentity()
    
def hitkey(key,mousex,mousey):
    global color
    if (key==b'q'):                 #按下q按键时
        glutDestroyWindow(winid)   #根据ID结束窗口
        sys.exit()
    elif (key==b'b'):
        color=blue
        glutPostRedisplay()        #重绘，将调用display
    elif (key==b'g'):
        color=green
        glutPostRedisplay()
    elif (key==b'r'):
        color=red
        glutPostRedisplay()
        
def mouse(button,state,x,y):
    pass

glutInit(sys.argv)
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA)
glutInitWindowSize(500,500)
glutInitWindowPosition(100,100)
winid=glutCreateWindow("hitkeytest")    #建立窗口的ID返回到winid
glutDisplayFunc(display)
glutReshapeFunc(reshape)
glutKeyboardFunc(hitkey)
glutMainLoop()

# 复制代码
