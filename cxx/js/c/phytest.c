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

GLfloat sunlight_position[] = {0.6f, 0.6f, 1.0f, 0.0f};
GLfloat sunlight_ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat sunlight_diffuse[] = {1.0f, 1.0f, 1.0f, 1.0f};
GLfloat sunlight_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};

/*GLfloat ball_mat_ambient[] = {0.0f, 0.0f, 0.5f, 1.0f};
GLfloat ball_mat_diffuse[] = {0.8f, 0.8f, 0.5f, 1.0f};
GLfloat ball_mat_specular[] = {0.8f, 0.8f, 0.7f, 1.0f};
GLfloat ball_mat_emission[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat ball_mat_shininess = 120.0f;*/

GLfloat ball_mat_ambient[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat ball_mat_diffuse[] = {0.7f, 0.7f, 0.7f, 1.0f};
GLfloat ball_mat_specular[] = {0.2f, 0.2f, 0.2f, 1.0f};
GLfloat ball_mat_emission[] = {0.0f, 0.0f, 0.0f, 1.0f};
GLfloat ball_mat_shininess = 10.0f;

typedef struct ball_ctl {
	float p_x, p_y, p_z;
	float v_x, v_y, v_z;
	float a_x, a_y, a_z;
	float r;
	float m;
} ball_ctl_t;

#define SIG(d) ((d) < 0 ? -1 : 1)
void applyGravity(ball_ctl_t *b, ball_ctl_t *balls, size_t balls_cnt)
{
	for (int i = 0; i < balls_cnt; i++) {
		if (b == balls + i)
			continue;
		float d_x = balls[i].p_x - b->p_x;
		float d_y = balls[i].p_y - b->p_y;
		float d_z = balls[i].p_z - b->p_z;
		float d = sqrt(d_x * d_x + d_y * d_y + d_z * d_z);
		float scale = b->m * balls[i].m / (d * d * d) * 100000.0f;
		//float scale = balls[i].m / (d * d * d) * 100000.0f;
		b->a_x += d_x * scale;
		b->a_y += d_y * scale;
		b->a_z += d_z * scale;
	}
}

void applyBounce(ball_ctl_t *b, ball_ctl_t *balls, size_t balls_cnt)
{
	for (int i = 0; i < balls_cnt; i++) {
		if (b == balls + i)
			continue;
		float d_x = balls[i].p_x - b->p_x;
		float d_y = balls[i].p_y - b->p_y;
		float d_z = balls[i].p_z - b->p_z;
		float d = sqrt(d_x * d_x + d_y * d_y + d_z * d_z);
		float r = b->r + balls[i].r;
		if (d < r) {
			float scale = 8.0f * (r - d);
			balls[i].a_x += scale * d_x;
			balls[i].a_y += scale * d_y;
			balls[i].a_z += scale * d_z;
		}
	}
}

void applySlowe(ball_ctl_t *b, ball_ctl_t *balls, size_t balls_cnt)
{
	for (int i = 0; i < balls_cnt; i++) {
		if (b == balls + i)
			continue;
		float d_x = balls[i].p_x - b->p_x;
		float d_y = balls[i].p_y - b->p_y;
		float d_z = balls[i].p_z - b->p_z;
		float d = sqrt(d_x * d_x + d_y * d_y + d_z * d_z);
		float r = b->r + balls[i].r;
		if (d < r) {
			float v_x = balls[i].v_x - b->v_x;
			float v_y = balls[i].v_y - b->v_y;
			float v_z = balls[i].v_z - b->v_z;
			float v = sqrt(v_x * v_x + v_y * v_y + v_z * v_z);
			float scale = 8.0f * v;
			balls[i].a_x -= scale * v_x;
			balls[i].a_y -= scale * v_y;
			balls[i].a_z -= scale * v_z;
		}
	}
}

void kinematic(ball_ctl_t *b, float dt)
{
	b->a_x /= b->m;
	b->a_y /= b->m;
	b->a_z /= b->m;
	b->p_x += b->v_x * dt;
	b->p_y += b->v_y * dt;
	b->p_z += b->v_z * dt;
	b->v_x += b->a_x * dt;
	b->v_y += b->a_y * dt;
	b->v_z += b->a_z * dt;
	b->a_x = 0;
	b->a_y = 0;
	b->a_z = 0;
}

void display(void)
{
	double FPS = calculateFrequency();
	if (FPS != 0)
		printf("FPS = %f\n", FPS);

	glCallList(1);
	glCallList(2);
	glCallList(3);

	static ball_ctl_t balls[2] = {
		[0] = {
			.p_x = 0,
			.p_y = 9,
			.p_z = -60,
			.v_x = 0,
			.v_y = 0,
			.v_z = 0,
			.r = 8,
			.m = 0.5,
		},
		[1] = {
			.p_x = 0,
			.p_y = -9,
			.p_z = -60,
			.v_x = 0,
			.v_y = 0,
			.v_z = 0,
			.r = 8,
			.m = 0.5,
		},
		/*[0].p_x = 0,
		[0].p_y = 0,
		[0].p_z = -60,
		[0].v_x = 0,
		[0].v_y = 0,
		[0].v_z = 0,
		[0].r = 2,
		[0].m = 8,
		[2].p_x = 0,
		[2].p_y = 14,
		[2].p_z = -60,
		[2].v_x = 60,
		[2].v_y = 0,
		[2].v_z = 0,
		[2].r = 3,
		[2].m = 0.01,
		[1].p_x = 20,
		[1].p_y = -10,
		[1].p_z = -60,
		[1].v_x = 0,
		[1].v_y = 100,
		[1].v_z = 100,
		[1].r = 1,
		[1].m = 1,*/
		/*[0].p_x = 0,
		[0].p_y = 0,
		[0].p_z = -60,
		[0].v_x = 0,
		[0].v_y = 0,
		[0].v_z = 0,
		[0].r = 2,
		[0].m = 8,
		[2].p_x = 0,
		[2].p_y = 16,
		[2].p_z = -60,
		[2].v_x = 100,
		[2].v_y = 0,
		[2].v_z = 0,
		[2].r = 0.5,
		[2].m = 0.0001,
		[1].p_x = 20,
		[1].p_y = -10,
		[1].p_z = -60,
		[1].v_x = 0,
		[1].v_y = 100,
		[1].v_z = 100,
		[1].r = 1,
		[1].m = 1,*/
		/*[0].p_x = 0,
		[0].p_y = -20,
		[0].p_z = -100,
		[0].v_x = 0,
		[0].v_y = 300,
		[0].v_z = 2000,
		[0].r = 3,
		[1].m = 12,
		[1].p_x = 0,
		[1].p_y = 0,
		[1].p_z = -100,
		[1].v_x = 0,
		[1].v_y = 0,
		[1].v_z = 1800,
		[1].r = 3,
		[1].m = 1,*/
		/*[0].p_x = 0,
		[0].p_y = 20,
		[0].p_z = -50,
		[0].v_x = -10,
		[0].v_y = -300,
		[0].v_z = 400,
		[0].r = 40,*/
	};

	static clock_t last = 0;
	clock_t current = clock();
	float time_passed = (float) (current - last) / CLOCKS_PER_SEC;
	last = current;

	int sort_ball(const ball_ctl_t *b1, const ball_ctl_t *b2)
	{
		return b1->p_z < b2->p_z ? 1 : -1;
	}

	qsort(balls, sizeof(balls) / sizeof(balls[0]), sizeof(balls[0]),
			(int (*)(const void *, const void *)) &sort_ball);

	for (int i = 0; i < sizeof(balls) / sizeof(balls[0]); i++) {
		glPushMatrix();
		glTranslatef(balls[i].p_x, balls[i].p_y, balls[i].p_z);
		glutSolidSphere(balls[i].r, 40, 32);
		glPopMatrix();
	}

	for (int i = 0; i < sizeof(balls) / sizeof(balls[0]); i++)
		applyGravity(&balls[i], balls, sizeof(balls) / sizeof(balls[0]));

	for (int i = 0; i < sizeof(balls) / sizeof(balls[0]); i++)
		applyBounce(&balls[i], balls, sizeof(balls) / sizeof(balls[0]));

	for (int i = 0; i < sizeof(balls) / sizeof(balls[0]); i++)
		kinematic(&balls[i], time_passed);


	glutSwapBuffers();
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

	glOrtho(-1.0, 1.0, -1.0, 1.0, 1.0, -1.0);
	glViewport(-1.0, -1.0, 2.0, 2.0);

	glPolygonMode(GL_FRONT, GL_FILL);
	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);

	//glEnable(GL_TEXTURE_2D);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);

	glNewList(1, GL_COMPILE);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, 1.0, 1.0, 800.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0, 1, 0);
	glEndList();

	glNewList(2, GL_COMPILE);
	glLightfv(GL_LIGHT0, GL_POSITION, sunlight_position);
	glLightfv(GL_LIGHT0, GL_AMBIENT, sunlight_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, sunlight_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, sunlight_specular);
	glEnable(GL_LIGHT0);
	glEndList();

	glNewList(3, GL_COMPILE);
	glMaterialfv(GL_FRONT, GL_AMBIENT, ball_mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, ball_mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, ball_mat_specular);
	glMaterialfv(GL_FRONT, GL_EMISSION, ball_mat_emission);
	glMaterialf(GL_FRONT, GL_SHININESS, ball_mat_shininess);
	glEndList();
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
