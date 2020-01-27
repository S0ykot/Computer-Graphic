#include<iostream>
#include <glut.h>

using namespace std;


void display()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(.5,0.0);
	glVertex2f(.5,.5);
	glVertex2f(0.0,0.0);
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