#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <unistd.h>
#include <time.h>
#include <math.h>

double calculateFrequency(void)
{
     static int count;
     static double save;
     static clock_t last, current;

     static const int REFRESH_COUNT = 50;

     ++count;
     if(count <= REFRESH_COUNT)
         return 0;

     count = 0;
     last = current;
     current = clock();

     double timegap = (current - last) / (double) CLOCKS_PER_SEC;

     save = REFRESH_COUNT / timegap;
     return save;
}

static float day = 0.0f;

GLfloat sunlight_position[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat sunlight_ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat sunlight_diffuse[] = {1.0f, 1.0f, 1.0f, 1.0f};
GLfloat sunlight_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};

GLfloat sun_mat_ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat sun_mat_diffuse[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat sun_mat_specular[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat sun_mat_emission[] = {1.0f, 1.0f, 0.8f, 1.0f};
GLfloat sun_mat_shininess = 0.0f;

GLfloat earth_mat_ambient[] = {0.0f, 0.0f, 0.5f, 1.0f};
GLfloat earth_mat_diffuse[] = {0.2f, 0.5f, 0.9f, 1.0f};
GLfloat earth_mat_specular[] = {0.9f, 0.9f, 1.0f, 1.0f};
GLfloat earth_mat_emission[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat earth_mat_shininess = 40.0f;

GLfloat moon_mat_ambient[] = {0.0f, 0.0f, 0.5f, 1.0f};
GLfloat moon_mat_diffuse[] = {0.8f, 0.8f, 0.5f, 1.0f};
GLfloat moon_mat_specular[] = {0.8f, 0.8f, 0.7f, 1.0f};
GLfloat moon_mat_emission[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat moon_mat_shininess = 100.0f;

void display(void)
{
	double FPS = calculateFrequency();
	if (FPS != 0)
		printf("FPS = %f\n", FPS);

	glCallList(1);
	glRotatef(day * (1 / 365.0f) * 360.0f, 0.0f, 0.0f, -1.0f);
	glCallList(2);
	glRotatef(day * (1 / 30.0f - 1 / 265.0f) * 360.0f, 0.0f, 0.0f, -1.0f);
	glCallList(3);

	glutSwapBuffers();
}

void idle(void)
{
	display();
	day += 0.1f;
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

	glOrtho(-1.0, 1.0, -1.0, 1.0, 1.0, -1.0);
	glViewport(-1.0, -1.0, 2.0, 2.0);

	glPolygonMode(GL_FRONT, GL_FILL);
	glPolygonMode(GL_BACK, GL_LINE);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);

	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);

	glNewList(1, GL_COMPILE);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, 1.0, 1.0, 800.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0, -300, 300, 0, 0, 0, 0, 0, 1);

	glLightfv(GL_LIGHT0, GL_POSITION, sunlight_position);
	glLightfv(GL_LIGHT0, GL_AMBIENT, sunlight_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, sunlight_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, sunlight_specular);
	glEnable(GL_LIGHT0);

	glMaterialfv(GL_FRONT, GL_AMBIENT, sun_mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, sun_mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, sun_mat_specular);
	glMaterialfv(GL_FRONT, GL_EMISSION, sun_mat_emission);
	glMaterialf(GL_FRONT, GL_SHININESS, sun_mat_shininess);
	glutSolidSphere(50.0, 40, 32);
	glEndList();

	glNewList(2, GL_COMPILE);
	glTranslatef(150.0f, 0.0f, 0.0f);

	glMaterialfv(GL_FRONT, GL_AMBIENT, earth_mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, earth_mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, earth_mat_specular);
	glMaterialfv(GL_FRONT, GL_EMISSION, earth_mat_emission);
	glMaterialf(GL_FRONT, GL_SHININESS, earth_mat_shininess);
	glutSolidSphere(15.0, 40, 32);
	glEndList();

	glNewList(3, GL_COMPILE);
	glTranslatef(38.0f, 0.0f, 0.0f);

	glMaterialfv(GL_FRONT, GL_AMBIENT, moon_mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, moon_mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, moon_mat_specular);
	glMaterialfv(GL_FRONT, GL_EMISSION, moon_mat_emission);
	glMaterialf(GL_FRONT, GL_SHININESS, moon_mat_shininess);
	glutSolidSphere(4.0, 20, 16);
	glEndList();

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1024, 1024);
	glutCreateWindow("My OpenGL Test");
	glutDisplayFunc(&display);
	glutKeyboardFunc(&keyboard);
	glutIdleFunc(&idle);
	init();
	glutMainLoop();
	return 0;
}
