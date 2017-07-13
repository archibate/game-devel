#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void drawSphere(float center_x, float center_y, float radius)
{
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		float ang = i * M_PI / 180;
		glColor3f(sinf(ang - M_PI / 2), sinf(ang), sinf(ang + M_PI / 2));
		glVertex2f(center_x + radius * cosf(ang), center_y + radius * sinf(ang));
	}
	glEnd();
}

void drawSine(float x0, float x1, float scale)
{
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(0.0f, 0xFFFF);
	glLineWidth(1.5f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_LINES);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(0.0f, -1.0f);
	glVertex2f(0.0f, 1.0f);
	glEnd();

	glLineStipple(2, 0x0F0F);
	glLineWidth(3.0f);
	glColor3f(1.0f, 0.0f, 0.5f);
	glBegin(GL_LINE_STRIP);
	for (float x = x0; x < x1; x += 0.01f) {
		float y = sinf(x * scale) / scale;
		glVertex2f(x, y);
	}
	glEnd();
	glLineStipple(0, 0xFFFF);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glColor4f(1.0f, 0.0f, 0.0f, 0.5f);
	glRectf(-1.0f, -1.0f, 0.5f, 0.5f);
	glColor4f(0.0f, 1.0f, 0.0f, 0.5f);
	glRectf(-0.5f, -0.5f, 1.0f, 1.0f);

	glFlush();
	return;

	drawSphere(0.0f, 0.0f, 0.4f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.5f, 0.0f);
	glEnd();

	glColor3f(1.0f, 0.0f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.5f, 0.0f);
	glEnd();

	glColor4f(0.0f, 0.8f, 0.0f, 0.5f);
	glRectf(-0.2f, -0.5f, 0.5f, 0.1f);

	static float orig_x = 0;
	drawSine(orig_x - 1.0f, orig_x + 1.0f, 8.0f);

	glFlush();
}

void idle(void)
{
	display();
}

void keyboard(unsigned char key, int mx, int my)
{
	if (key == 27)
		exit(0);
}

void init(void)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glShadeModel(GL_SMOOTH);
	glClearColor(0.0f, 0.2f, 0.3f, 0.0f);
	glFrontFace(GL_CCW);
	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_LINE);
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("My OpenGL Test");
	glutDisplayFunc(&display);
	glutKeyboardFunc(&keyboard);
	//glutIdleFunc(&idle);
	init();
	glutMainLoop();
	return 0;
}
