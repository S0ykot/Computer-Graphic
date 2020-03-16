#include<iostream>
#include <glut.h>
#include<math.h>
# define PI           3.14159265358979323846

using namespace std;

void circle(float x,float y,int triangleAmount,float radius,int r,int g,int b)
{
	
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(r,g,b);
	float twicePi=2*PI;
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


GLfloat position = 0.0f;
GLfloat speed = 0.1f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;

void update(int value) {
    if(position <-1.0)
        position = 1.0f;
    position -= speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}

void update1(int value) {
    if(position1 >1.0)
        position1 = -1.0f;
    position1 += speed1;
	glutPostRedisplay();
	glutTimerFunc(100, update1, 0);
}



void night()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);  //sky
	glColor3ub(0,0,0);
	glVertex2f(1,.3);
	glVertex2f(1,1);
	glVertex2f(-1,1);
	glVertex2f(-1,.3);
	glEnd();

	GLfloat x=-.8f; GLfloat y=.9f; GLfloat radius =.1f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f); 
	glBegin(GL_TRIANGLE_FAN);   //sun
	glColor3ub(255,255,255);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	glLoadIdentity();

	glBegin(GL_QUADS);  //green back
	glColor3ub(153,255,51);
	glVertex2f(1,-.1);
	glVertex2f(1,.2);
	glVertex2f(-1,.2);
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
	glColor3ub(203,162,153);
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

	glBegin(GL_QUADS);  //tree
	glColor3ub(153, 51, 51);
	glVertex2f(-.5,-.2);
	glVertex2f(-.5,.4);
	glVertex2f(-.6,.4);
	glVertex2f(-.6,-.2);
	glEnd();

	circle(-.55,.5,20,.2,0,153,0);
	circle(-.6,.4,20,.156,0,153,0);
	glTranslatef(-.07,.09,0);
	circle(-.6,.4,20,.156,0,153,0);
	glLoadIdentity();
	circle(-.55,.6,20,.2,0,153,0);

	glScalef(.5,.5,0);
	glBegin(GL_QUADS);  //tree
	glColor3ub(153, 51, 51);
	glVertex2f(-.5,-.2);
	glVertex2f(-.5,.4);
	glVertex2f(-.6,.4);
	glVertex2f(-.6,-.2);
	glEnd();
	circle(-.55,.5,20,.2,0,153,0);
	circle(-.6,.4,20,.156,0,153,0);
	glTranslatef(-.07,.09,0);
	circle(-.6,.4,20,.156,0,153,0);
	glScalef(.5,.5,0);
	glLoadIdentity();
	circle(-.55,.6,20,.2,0,153,0);


	glBegin(GL_QUADS);  //window1
	glColor3ub(144, 140, 139);
	glVertex2f(.12,.1);
	glVertex2f(.12,.3);
	glVertex2f(-.1,.3);
	glVertex2f(-.1,.1);
	glEnd();


	glTranslatef(.4,.001,0);
	glBegin(GL_QUADS);  //window1
	glColor3ub(144, 140, 139);
	glVertex2f(.12,.1);
	glVertex2f(.12,.3);
	glVertex2f(-.1,.3);
	glVertex2f(-.1,.1);
	glEnd();
	glLoadIdentity();

	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(1,-0.6);
	glVertex2f(-1,-0.6);
	glVertex2f(-1,-0.67);
	glVertex2f(1,-0.67);
    glEnd();

	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(1,-1);
	glVertex2f(-1,-1);
	glVertex2f(-1,-0.93);
	glVertex2f(1,-0.93);
    glEnd();

	glBegin(GL_QUADS);		//train line back
    glColor3ub(194, 194, 163);
	glVertex2f(1,-0.67);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(1,-0.93);
    glEnd();

	

	glBegin(GL_QUADS);		
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();

	glTranslatef(0.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(0.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(0.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(3,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);

	glBegin(GL_QUADS);		//train1
    glColor3ub(51, 204, 204);
	glVertex2f(0.95,-.86);
	glVertex2f(0.95,-0.55);
	glVertex2f(0.375,-0.55);
	glVertex2f(0.375,-0.86);
    glEnd();


	
	glBegin(GL_QUADS);		//train1
    glColor3ub(204, 51, 0);
	glVertex2f(0.85,-0.55);
	glVertex2f(0.85,-0.35);
	glVertex2f(0.6375,-0.35);
	glVertex2f(0.6375,-0.55);
    glEnd();

	glBegin(GL_QUADS);		//train1
    glColor3ub(0,0 , 0);
	glVertex2f(0.735,-0.35);
	glVertex2f(0.825,-0.35);
	glVertex2f(0.825,-0.25);
	glVertex2f(0.735,-0.25);
    glEnd();

	glBegin(GL_QUADS);		//train1
    glColor3ub(0, 51, 102);
	glVertex2f(0.6375,-0.55);
	glVertex2f(0.6375,-0.15);
	glVertex2f(0.425,-0.15);
	glVertex2f(0.425,-0.55);
    glEnd();

	glBegin(GL_QUADS);		//train connector
    glColor3ub(255, 121, 77);
	glVertex2f(0.375,-0.76);
	glVertex2f(0.375,-0.68);
	glVertex2f(0.225,-0.68);
	glVertex2f(0.225,-0.76);
    glEnd();

	

	glBegin(GL_QUADS);		//train2
    glColor3ub(0, 153, 204);
	glVertex2f(0.23,-.86);
	glVertex2f(0.225,-0.25);
	glVertex2f(-0.325,-0.25);
	glVertex2f(-0.325,-0.86);
    glEnd();

	glBegin(GL_QUADS);		//train2 window1
    glColor3ub(224, 235, 235);
	glVertex2f(-0.25,-0.55);
	glVertex2f(-0.1,-0.55);
	glVertex2f(-0.1,-0.35);
	glVertex2f(-0.25,-0.35);
    glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);

	glTranslatef(0.25,0,0);
	glBegin(GL_QUADS);		//train2 window2
    glColor3ub(224, 235, 235);
	glVertex2f(-0.25,-0.55);
	glVertex2f(-0.1,-0.55);
	glVertex2f(-0.1,-0.35);
	glVertex2f(-0.25,-0.35);
    glEnd();
	glLoadIdentity();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train connector
    glColor3ub(255, 121, 77);
	glVertex2f(0.375,-0.76);
	glVertex2f(0.375,-0.68);
	glVertex2f(0.225,-0.68);
	glVertex2f(0.225,-0.76);
    glEnd();
	glLoadIdentity();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train3
    glColor3ub(0, 153, 204);
	glVertex2f(0.225,-.86);
	glVertex2f(0.225,-0.25);
	glVertex2f(-0.325,-0.25);
	glVertex2f(-0.325,-0.86);
    glEnd();
	glLoadIdentity();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glTranslatef(-0.45,0,0);
	glBegin(GL_QUADS);		//train3 window1
    glColor3ub(224, 235, 235);
	glVertex2f(-0.25,-0.55);
	glVertex2f(-0.1,-0.55);
	glVertex2f(-0.1,-0.35);
	glVertex2f(-0.25,-0.35);
    glEnd();
    glLoadIdentity();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train3 window2
    glColor3ub(224, 235, 235);
	glVertex2f(-0.25,-0.55);
	glVertex2f(-0.1,-0.55);
	glVertex2f(-0.1,-0.35);
	glVertex2f(-0.25,-0.35);
    glEnd();
	glLoadIdentity();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	//Wheel of train
	circle(0.8,-0.88,100,0.105,255,255,204);
	circle(0.53,-0.88,100,0.105,255,255,204);
	circle(0.075,-0.88,100,0.105,255,255,204);
	circle(-0.175,-0.88,100,0.105,255,255,204);
	circle(-0.605,-0.88,100,0.105,255,255,204);
	circle(-0.855,-0.88,100,0.105,255,255,204);

	glPopMatrix(); 

	glFlush();
}



void display1(int b)
{
    glutDisplayFunc(night);
		glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update1, 0);
}







void day()
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

	GLfloat x=-.8f; GLfloat y=.9f; GLfloat radius =.1f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glPushMatrix();
	glTranslatef(position,0.0f, 0.0f); 
	glBegin(GL_TRIANGLE_FAN);   //sun
	glColor3ub(255,255,0);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	glLoadIdentity();

	glBegin(GL_QUADS);  //green back
	glColor3ub(153,255,51);
	glVertex2f(1,-.1);
	glVertex2f(1,.2);
	glVertex2f(-1,.2);
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
	glColor3ub(203,162,153);
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

	glBegin(GL_QUADS);  //tree
	glColor3ub(153, 51, 51);
	glVertex2f(-.5,-.2);
	glVertex2f(-.5,.4);
	glVertex2f(-.6,.4);
	glVertex2f(-.6,-.2);
	glEnd();

	circle(-.55,.5,20,.2,0,153,0);
	circle(-.6,.4,20,.156,0,153,0);
	glTranslatef(-.07,.09,0);
	circle(-.6,.4,20,.156,0,153,0);
	glLoadIdentity();
	circle(-.55,.6,20,.2,0,153,0);

	glScalef(.5,.5,0);
	glBegin(GL_QUADS);  //tree
	glColor3ub(153, 51, 51);
	glVertex2f(-.5,-.2);
	glVertex2f(-.5,.4);
	glVertex2f(-.6,.4);
	glVertex2f(-.6,-.2);
	glEnd();
	circle(-.55,.5,20,.2,0,153,0);
	circle(-.6,.4,20,.156,0,153,0);
	glTranslatef(-.07,.09,0);
	circle(-.6,.4,20,.156,0,153,0);
	glScalef(.5,.5,0);
	glLoadIdentity();
	circle(-.55,.6,20,.2,0,153,0);


	glBegin(GL_QUADS);  //window1
	glColor3ub(144, 140, 139);
	glVertex2f(.12,.1);
	glVertex2f(.12,.3);
	glVertex2f(-.1,.3);
	glVertex2f(-.1,.1);
	glEnd();


	glTranslatef(.4,.001,0);
	glBegin(GL_QUADS);  //window1
	glColor3ub(144, 140, 139);
	glVertex2f(.12,.1);
	glVertex2f(.12,.3);
	glVertex2f(-.1,.3);
	glVertex2f(-.1,.1);
	glEnd();
	glLoadIdentity();

	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(1,-0.6);
	glVertex2f(-1,-0.6);
	glVertex2f(-1,-0.67);
	glVertex2f(1,-0.67);
    glEnd();

	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(1,-1);
	glVertex2f(-1,-1);
	glVertex2f(-1,-0.93);
	glVertex2f(1,-0.93);
    glEnd();

	glBegin(GL_QUADS);		//train line back
    glColor3ub(194, 194, 163);
	glVertex2f(1,-0.67);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(1,-0.93);
    glEnd();

	

	glBegin(GL_QUADS);		
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();

	glTranslatef(0.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(0.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(0.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(1.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.25,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.5,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(2.75,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glTranslatef(3,0,0);
	glBegin(GL_QUADS);		//train line
    glColor3ub(0, 0, 0);
	glVertex2f(-1,-0.67);
	glVertex2f(-1,-0.93);
	glVertex2f(-0.97,-0.93);
	glVertex2f(-0.97,-0.67);
    glEnd();
	glLoadIdentity();

	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);

	glBegin(GL_QUADS);		//train1
    glColor3ub(51, 204, 204);
	glVertex2f(0.95,-.86);
	glVertex2f(0.95,-0.55);
	glVertex2f(0.375,-0.55);
	glVertex2f(0.375,-0.86);
    glEnd();


	
	glBegin(GL_QUADS);		//train1
    glColor3ub(204, 51, 0);
	glVertex2f(0.85,-0.55);
	glVertex2f(0.85,-0.35);
	glVertex2f(0.6375,-0.35);
	glVertex2f(0.6375,-0.55);
    glEnd();

	glBegin(GL_QUADS);		//train1
    glColor3ub(0,0 , 0);
	glVertex2f(0.735,-0.35);
	glVertex2f(0.825,-0.35);
	glVertex2f(0.825,-0.25);
	glVertex2f(0.735,-0.25);
    glEnd();

	glBegin(GL_QUADS);		//train1
    glColor3ub(0, 51, 102);
	glVertex2f(0.6375,-0.55);
	glVertex2f(0.6375,-0.15);
	glVertex2f(0.425,-0.15);
	glVertex2f(0.425,-0.55);
    glEnd();

	glBegin(GL_QUADS);		//train connector
    glColor3ub(255, 121, 77);
	glVertex2f(0.375,-0.76);
	glVertex2f(0.375,-0.68);
	glVertex2f(0.225,-0.68);
	glVertex2f(0.225,-0.76);
    glEnd();

	

	glBegin(GL_QUADS);		//train2
    glColor3ub(0, 153, 204);
	glVertex2f(0.23,-.86);
	glVertex2f(0.225,-0.25);
	glVertex2f(-0.325,-0.25);
	glVertex2f(-0.325,-0.86);
    glEnd();

	glBegin(GL_QUADS);		//train2 window1
    glColor3ub(224, 235, 235);
	glVertex2f(-0.25,-0.55);
	glVertex2f(-0.1,-0.55);
	glVertex2f(-0.1,-0.35);
	glVertex2f(-0.25,-0.35);
    glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);

	glTranslatef(0.25,0,0);
	glBegin(GL_QUADS);		//train2 window2
    glColor3ub(224, 235, 235);
	glVertex2f(-0.25,-0.55);
	glVertex2f(-0.1,-0.55);
	glVertex2f(-0.1,-0.35);
	glVertex2f(-0.25,-0.35);
    glEnd();
	glLoadIdentity();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train connector
    glColor3ub(255, 121, 77);
	glVertex2f(0.375,-0.76);
	glVertex2f(0.375,-0.68);
	glVertex2f(0.225,-0.68);
	glVertex2f(0.225,-0.76);
    glEnd();
	glLoadIdentity();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train3
    glColor3ub(0, 153, 204);
	glVertex2f(0.225,-.86);
	glVertex2f(0.225,-0.25);
	glVertex2f(-0.325,-0.25);
	glVertex2f(-0.325,-0.86);
    glEnd();
	glLoadIdentity();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glTranslatef(-0.45,0,0);
	glBegin(GL_QUADS);		//train3 window1
    glColor3ub(224, 235, 235);
	glVertex2f(-0.25,-0.55);
	glVertex2f(-0.1,-0.55);
	glVertex2f(-0.1,-0.35);
	glVertex2f(-0.25,-0.35);
    glEnd();
    glLoadIdentity();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	glTranslatef(-0.7,0,0);
	glBegin(GL_QUADS);		//train3 window2
    glColor3ub(224, 235, 235);
	glVertex2f(-0.25,-0.55);
	glVertex2f(-0.1,-0.55);
	glVertex2f(-0.1,-0.35);
	glVertex2f(-0.25,-0.35);
    glEnd();
	glLoadIdentity();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(position1,0.0f, 0.0f);
	//Wheel of train
	circle(0.8,-0.88,100,0.105,255,255,204);
	circle(0.53,-0.88,100,0.105,255,255,204);
	circle(0.075,-0.88,100,0.105,255,255,204);
	circle(-0.175,-0.88,100,0.105,255,255,204);
	circle(-0.605,-0.88,100,0.105,255,255,204);
	circle(-0.855,-0.88,100,0.105,255,255,204);

	glPopMatrix(); 

	glutTimerFunc(3000,display1,0);
	glFlush();
}


int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutCreateWindow("CG");
	glutInitWindowSize(320,320);
	glutDisplayFunc(day);
	glutMainLoop();
	return 0;
}
