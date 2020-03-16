#include <glut.h>
GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat speed = 0.01f;

void update(int value) {
if(position > 1)
        position = -1.0f;
    position += speed;
	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}


//void SpecialInput(int key, int x, int y)
//{
//switch(key)
//{
//case GLUT_KEY_UP:
//speed = 0.05f;
//break;
//case GLUT_KEY_DOWN:
//speed = 0.0f;
//break;
//case GLUT_KEY_LEFT:
//speed= 1;
//break;
//case GLUT_KEY_RIGHT:
//speed = 0.01f;
//break;
//}
//glutPostRedisplay();
//}

//void abc(unsigned char key,int x,int y){
//	switch (key)
//	{
//	case 'a':
//		speed=  0.002f;
//		break;
//	case 'b':
//		speed= 0.5f;
//		break;
//	}
//}

void abc(int key,int state, int x,int y){
	if (key==GLUT_LEFT_BUTTON)
	{
		speed +=.001f;
	}
	else
	{
		speed -=.001f;
	}
	glutPostRedisplay();
}


void display() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
glTranslatef(position, 0.0f,0);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,-0.2f);
   glVertex2f(0.5f, 0.0f);
   glVertex2f(0.2f, 0.2f);
   glEnd();

glPopMatrix();
   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   //glutSpecialFunc(SpecialInput);
   //glutKeyboardFunc(abc);
   glutMouseFunc(abc);
glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
