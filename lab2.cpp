#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);
              glBegin(GL_LINES);
              glColor3f(0.3,0.5,0.6);
              glVertex2f(-1,0);
              glVertex2f(1,0);
			  glVertex2f(0,1);
              glVertex2f(0,-1);
              glEnd();

				/*glBegin(GL_TRIANGLES);
				glColor3f(.5,.9,.856);
				glVertex2f(.5,0);
				glVertex2f(.25,.5);
				glVertex2f(0,0);

				glColor3f(.3,.5,.956);
				glVertex2f(.25,-.5);
				glVertex2f(.5,0);
				glVertex2f(0,0);
				glEnd();*/

			 /* glBegin(GL_LINES);
              glColor3f(0,0,0);
              glVertex2f(0,1);
              glVertex2f(0,-1);
              glEnd();*/


			  /*glBegin(GL_QUADS);
			  glColor3f(.3,.7,.2);
			  glVertex2f(.7,.2);
			  glVertex2f(.7,.7);
			  glVertex2f(.2,.7);
			  glVertex2f(.2,.2);
			  glEnd();

			    glBegin(GL_TRIANGLES);
				glColor3f(.5,.9,.856);
				glVertex2f(-.3,.3);
				glVertex2f(-.5,.5);
				glVertex2f(-.7,.3);
				glEnd();

			glBegin(GL_POLYGON);
			glColor3f(.8, .7, .62);
			glVertex2f(-.3,-.9);
			glVertex2f(-.2,-.7);
			glVertex2f(-.2,-.6);
			glVertex2f(-.3,-.4);
			glVertex2f(-.7,-.4);
			glVertex2f(-.8,-.6);
			glVertex2f(-.8,-.7);
			glVertex2f(-.7,-.9);
			glEnd();

			  glBegin(GL_LINES);
              glColor3f(0.3,0.5,0.6);
              glVertex2f(.4,-.4);
              glVertex2f(.6,-.4);
			  glVertex2f(.6,-.4);
              glVertex2f(.5,-.6);
			  glVertex2f(.5,-.6);
			  glVertex2f(.4,-.4);
              glEnd();*/

			  glBegin(GL_QUADS);
			  glColor3ub(253,6,6);
			  glVertex2f(.5,.7);
			  glVertex2f(.5,.9);
			  glVertex2f(-.5,.9);
			  glVertex2f(-.5,.7);

			  glColor3ub(253,187,6);
			  glVertex2f(.5,.5);
			  glVertex2f(.5,.7);
			  glVertex2f(-.5,.7);
			  glVertex2f(-.5,.5);

			  glColor3ub(237,253,6);
			  glVertex2f(.5,.3);
			  glVertex2f(.5,.5);	
			  glVertex2f(-.5,.5);
			  glVertex2f(-.5,.3);

			  glColor3ub(0,153,0);
			  glVertex2f(.5,.1);
			  glVertex2f(.5,.3);	
			  glVertex2f(-.5,.3);
			  glVertex2f(-.5,.1);

			  glColor3ub(0,0,255);
			  glVertex2f(.5,-.1);
			  glVertex2f(.5,0.1);
			  glVertex2f(-.5,.1);
			  glVertex2f(-.5,-.1);

			  glColor3ub(127,0,255);
			  glVertex2f(.5,-0.3);
			  glVertex2f(.5,-.1);
			  glVertex2f(-.5,-.1);
			  glVertex2f(-.5,-.3);
			  

			  glColor3ub(1,1,1);
			  glVertex2f(-.5,-1);
			  glVertex2f(-.5,.9);
			  glVertex2f(-.6,.9);
			  glVertex2f(-.6,-1);


			  glEnd();

			 glBegin(GL_POLYGON);
			glColor3f(.8, .7, .62);
			glVertex2f(.6,-.8);
			glVertex2f(.5,-.7);
			glVertex2f(.25,-.7);
			glVertex2f(.15,-.8);
			glEnd();

				glBegin(GL_QUADS);
			  glColor3ub(253,6,6);
			  glVertex2f(.5,-.9);
			  glVertex2f(.5,-.8);
			  glVertex2f(.25,-.8);
			  glVertex2f(.25,-.9);

			  glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}