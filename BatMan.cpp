#include<windows.h>
#include<glut.h>
#include<math.h>
# define PI           3.14159265358979323846



void display()
{
	glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(.5, .6, .7);
	glVertex2f(.2,.6);
	glVertex2f(.2,1);
	glVertex2f(-.2,1);
	glVertex2f(-.2,.6);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(.1,.8);
	glVertex2f(.1,1);
	glVertex2f(-.1,1);
	glVertex2f(-.1,.8);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.9, .3, .1);
	glVertex2f(.2,.5);
	glVertex2f(.2,.6);
	glVertex2f(-.2,.6);
	glVertex2f(-.2,.5);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.8,.25,.62);
	glVertex2f(.4,.2);
	glVertex2f(.4,.3);
	glVertex2f(-.4,.3);
	glVertex2f(-.4,.2);
	glEnd();



	glBegin(GL_QUADS);
	glColor3f(.7,.52,.26);
	glVertex2f(.4,.1);
	glVertex2f(.4,.2);
	glVertex2f(-.4,.2);
	glVertex2f(-.4,.1);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(.92,.87,.52);
	glVertex2f(.3,.1);
	glVertex2f(.3,.2);
	glVertex2f(-.3,.2);
	glVertex2f(-.3,.1);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(.4,-.3);
	glVertex2f(.4,.1);
	glVertex2f(-.4,.1);
	glVertex2f(-.4,-.3);
	glEnd();


	glBegin(GL_QUADS);  // leg shoe
	glColor3f(0,.52,.201);
	glVertex2f(-.1,-.8);
	glVertex2f(-.1,-.7);
	glVertex2f(-.2,-.7);
	glVertex2f(-.2,-.8);
	glEnd();

	glBegin(GL_QUADS);  // leg shoe
	glColor3f(.8,.9,.92);
	glVertex2f(-.2,-.8);
	glVertex2f(-.2,-.7);
	glVertex2f(-.3,-.7);
	glVertex2f(-.3,-.8);
	glEnd();

	glBegin(GL_QUADS); //leg
	glColor3f(.9,.1,.8);
	glVertex2f(-.1,-.7);
	glVertex2f(-.1,-.1);
	glVertex2f(-.2,-.1);
	glVertex2f(-.2,-.7);
	glEnd();

	glBegin(GL_QUADS); //leg
	glColor3f(.7,.1,.8);
	glVertex2f(-.2,-.7);
	glVertex2f(-.2,-.1);
	glVertex2f(-.3,-.1);
	glVertex2f(-.3,-.7);
	glEnd();

	glTranslatef(.4,0,0);
	glBegin(GL_QUADS);  // leg shoe
	glColor3f(0,.52,.201);
	glVertex2f(-.1,-.8);
	glVertex2f(-.1,-.7);
	glVertex2f(-.2,-.7);
	glVertex2f(-.2,-.8);
	glEnd();

	glBegin(GL_QUADS);  // leg shoe
	glColor3f(.8,.9,.92);
	glVertex2f(-.2,-.8);
	glVertex2f(-.2,-.7);
	glVertex2f(-.3,-.7);
	glVertex2f(-.3,-.8);
	glEnd();

	glBegin(GL_QUADS); //leg
	glColor3f(.9,.1,.8);
	glVertex2f(-.1,-.7);
	glVertex2f(-.1,-.1);
	glVertex2f(-.2,-.1);
	glVertex2f(-.2,-.7);
	glEnd();

	glBegin(GL_QUADS); //leg
	glColor3f(.7,.1,.8);
	glVertex2f(-.2,-.7);
	glVertex2f(-.2,-.1);
	glVertex2f(-.3,-.1);
	glVertex2f(-.3,-.7);
	glEnd();
	glLoadIdentity();

	glBegin(GL_QUADS);
	glColor3f(.3,.8,.2);
	glVertex2f(.3,-.2);
	glVertex2f(.3,.1);
	glVertex2f(-.15,.1);
	glVertex2f(-.15,-.2);
	glEnd();



















	glBegin(GL_QUADS);
	glColor3f(.7, .9, .2);
	glVertex2f(.3,.2);
	glVertex2f(.3,.5);
	glVertex2f(-.3,.5);
	glVertex2f(-.3,.2);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(.7, .9, .2);
	glVertex2f(.4,.3);
	glVertex2f(.4,.4);
	glVertex2f(-.4,.4);
	glVertex2f(-.4,.3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0,0,0);
	glVertex2f(.15,.3);
	glVertex2f(.15,.4);
	glVertex2f(-.15,.4);
	glVertex2f(-.15,.3);
	glEnd();


	glFlush();
}

int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("Lab Exam");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
