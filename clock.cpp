#include <glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

 GLfloat h=0.0f;
 GLfloat m=0.0f;
 GLfloat s=0.0f;
void Idle()
{
    glutPostRedisplay();
}


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	glClear(GL_COLOR_BUFFER_BIT);

	

	glBegin(GL_QUADS);
    glColor3ub(255,255,255);
	glVertex2f(1,-1);
	glVertex2f(1,1);
	glVertex2f(-1,1);
	glVertex2f(-1,-1);
	glEnd();
	glLoadIdentity();
	int i;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.6f;
	int triangleAmount = 40;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 x=.0f;  y=.0f;  radius =.57f;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 159, 159);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);//hour
	glVertex2f(-.350,.0);
	glVertex2f(0.0,0.0);
	glEnd();

	glPopMatrix();
glRotatef(m,0.0,0.0,0.1);

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);//minuite
	glVertex2f(0.0,.4);
	glVertex2f(0.0,0.0);
	glEnd();

	glPopMatrix();
m-=0.0001f;
glLoadIdentity();

	glPopMatrix();
     glRotatef(s,0.0,0.0,0.1);

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);//second
	glVertex2f(0.0,0.0);
	glVertex2f(-.3,-.4);
	glEnd();
	glPopMatrix();
   s-=0.0025f;
glLoadIdentity();


	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.0,0.46);
	glVertex2f(0.0,0.54);
	glLineWidth(4.5);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.45,0.0);
	glVertex2f(0.54,0.0);
	glLineWidth(4.5);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(-0.45,0.0);
	glVertex2f(-0.54,0.0);
	glLineWidth(4.5);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.0,-0.46);
	glVertex2f(0.0,-0.54);
	glLineWidth(4.5);
	glEnd();

	 x=.0f;  y=.0f;  radius =.04f;

	 twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}
