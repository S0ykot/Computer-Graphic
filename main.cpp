#include<iostream>
#include <glut.h>
#include<math.h>
# define PI           3.14159265358979323846

using namespace std;


void display()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);  //sky
	glColor3ub(0,255,255);
	glVertex2f(1,.3);
	glVertex2f(1,1);
	glVertex2f(-1,1);
	glVertex2f(-1,.3);
	glEnd();

	GLfloat x=-.6f; GLfloat y=.7f; GLfloat radius =.1f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_QUADS);  //green back
	glColor3ub(0,153,0);
	glVertex2f(1,-.1);
	glVertex2f(1,.3);
	glVertex2f(-1,.3);
	glVertex2f(-1,-.1);
	glEnd();

	glBegin(GL_QUADS);  //path
	glColor3ub(178, 102,255);
	glVertex2f(1,-.2);
	glVertex2f(1,-.1);
	glVertex2f(-1,-.1);
	glVertex2f(-1,-.2);
	glEnd();

	glBegin(GL_QUADS);  //path
	glColor3ub(178, 102,255);
	glVertex2f(1,-.2);
	glVertex2f(1,-.1);
	glVertex2f(-1,-.1);
	glVertex2f(-1,-.2);
	glEnd();

	glBegin(GL_QUADS);  //path2
	glColor3ub(192, 192,192);
	glVertex2f(1,-.2);
	glVertex2f(1,-.1);
	glVertex2f(-1,-.1);
	glVertex2f(-1,-.2);
	glEnd();

	glBegin(GL_QUADS);  //path3
	glColor3ub(102,0,0);
	glVertex2f(1,-.4);
	glVertex2f(1,-.2);
	glVertex2f(-1,-.2);
	glVertex2f(-1,-.4);
	glEnd();


	glBegin(GL_QUADS);  //path4
	glColor3ub(1,1,1);
	glVertex2f(1,-.6);
	glVertex2f(1,-.4);
	glVertex2f(-1,-.4);
	glVertex2f(-1,-.6);
	glEnd();


	glBegin(GL_QUADS);  //signal 
	glColor3ub(160,160,160);
	glVertex2f(.95,.1);
	glVertex2f(.95,.5);
	glVertex2f(.8,.5);
	glVertex2f(.8,.1);
	glEnd();

	GLfloat x1=.87f; GLfloat y1=.2f; GLfloat radius1 =.05f;
	int triangleAmount1 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,204,0);
		glVertex2f(x1, y1); 
		for(int i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount1)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount1))
			);
		}
	glEnd();

	//--------------------------------------------------------

	GLfloat x2=.87f; GLfloat y2=.32f; GLfloat radius2 =.05f;
	int triangleAmount2 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,0);
		glVertex2f(x2, y2); 
		for(int i = 0; i <= triangleAmount2;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount2)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount2))
			);
		}
	glEnd();


	//--------------------------------------------------------

	GLfloat x3=.87f; GLfloat y3=.44f; GLfloat radius3 =.05f;
	int triangleAmount3 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,0,0);
		glVertex2f(x3, y3); 
		for(int i = 0; i <= triangleAmount3;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount3)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount3))
			);
		}
	glEnd();


	//------------------------------------------------------------

	glBegin(GL_QUADS);  //signal  stand
	glColor3ub(32,32,32);
	glVertex2f(.91,-.2);
	glVertex2f(.91,.1);
	glVertex2f(.88,.1);
	glVertex2f(.88,-.2);
	glEnd();




















	glBegin(GL_QUADS);  //station
	glColor3ub(204, 51, 51);
	glVertex2f(.6,-.1);
	glVertex2f(.6,.5);
	glVertex2f(-.2,.5);
	glVertex2f(-.2,-.1);
	glEnd();

	glBegin(GL_POLYGON);  //station
	glColor3ub(204, 102, 0);
	glVertex2f(.7,.5);
	glVertex2f(.6,.6);
	glVertex2f(-.2,.6);
	glVertex2f(-.3,.5);
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