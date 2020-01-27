#include<iostream>
#include <glut.h>

using namespace std;


void display()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	//glColor3f(1.0, 0.0, 0.0);
	glColor3ub(255,255,255);
	glVertex2f(0.5,0.0);
	glVertex2f(0.0,.5);
	glVertex2f(-0.5,0.0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(218,47,47);
	glVertex2f(.4,-.4);
	glVertex2f(.4,0.0);
	glVertex2f(-.4,0);
	glVertex2f(-.4,-.4);
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