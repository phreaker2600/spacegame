#include <GLUT/glut.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define ISIZE 200
char fb[ISIZE*ISIZE*3];
void	
display(void)	
{
	glClearColor(0,0,0,0);
	glRasterPos2i(0,0);
	glDrawPixels(ISIZE,ISIZE,GL_RGB, GL_UNSIGNED_BYTE,fb);
	glutSwapBuffers();
}

void	
reshape(int width, int height)	
{

	glViewport(0,0,width,height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//set the coordinate system, with the origin in the top left
	gluOrtho2D(0, width, height, 0);
	glMatrixMode(GL_MODELVIEW);

}

void	
idle(void)
{

	glutPostRedisplay();
	usleep(100*100); //forking laptop is catching on fire... let's block the cpu some...
}
//don't step in the copypasta

void 
keyboard(unsigned char key, int x, int y)
{
//TODO: I don't think were going to do any reall time anything, but if we were, a keyup keydown thing might be nice...

	printf(" k:%d %c\n", key, key);
	switch (key) {
		case 127: exit(0);
	}
}

void 
mouse(int x, int y)
{
	fb[(x*3) +(y*ISIZE*3)]=0xFF;
}
int	
main(int argc, char *argv)
{
	glutInit(&argc,	&argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE|GLUT_DEPTH);
	glutInitWindowSize(200,	200);
	glutCreateWindow("paint");

	//pass	the callbacks
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc (keyboard);
	glutMotionFunc(mouse);
	glutIdleFunc(idle);
	glEnable(GL_BLEND); //alpha doesn't work without these
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glutMainLoop();


	return	1;//reaching here is an error (as retarded as that is)

}
