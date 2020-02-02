#include<iostream>
#include <glut.h>

using namespace std;


void display()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	//glBegin(GL_TRIANGLES);
	////glColor3f(1.0, 0.0, 0.0);
	//glColor3ub(43,67,11);
	//glVertex2f(0.5,0.0);
	//glVertex2f(0.0,.5);
	//glVertex2f(-0.5,0.0);
	//glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(43,67,11);
	glVertex2f(.5,0);
	glVertex2f(0,.5);
	glVertex2f(-.5,0);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(218,47,47);
	glVertex2f(.5,-.5);
	glVertex2f(.5,0);
	glVertex2f(-.5,0);
	glVertex2f(-.5,-.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(50, 168, 82);
	glVertex2f(.4,-.4);
	glVertex2f(.4,-.2);
	glVertex2f(.2,-.2);
	glVertex2f(.2,-.4);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(50, 168, 82);
	glVertex2f(-.4,-.4);
	glVertex2f(-.4,-.2);
	glVertex2f(-.2,-.2);
	glVertex2f(-.2,-.4);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 1, 1);
	glVertex2f(.6,-.6);
	glVertex2f(.5,-.5);
	glVertex2f(-.5,-.5);
	glVertex2f(-.6,-.6);
	glEnd();

	glFlush();
}



int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutCreateWindow("CG");
	glutInitWindowSize(320,320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}