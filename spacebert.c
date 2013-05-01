//q*bert meets redcode in space.
//think of wreck-it-ralph
//a cryptoanarchy type thing, a place for cyberpunks to hang out
//port 2600 on udp and tcp will be a free for all port
#include <GLUT/glut.h>
#include <unistd.h>
#include <stdio.h>
//memory
//              block-----   255byte page     row   byte
//            BX   BY   BZ        PN           RN   BN
char coremem [16] [16] [16]      [16]         [16] [16];


#define CUBESIZE 32

double playerx,playery,playerz,		playervx,playervy,playervz;

void
tcube(double x, double y, double z, int s)
{
  	 glLoadIdentity();
	glRotated(45,1,1,0);
	glTranslatef(x,y,z);
    glutWireCube(s);

}
void
drawpage(double x, double y, double z,char* buff)
{
	int i;
	for(i=0;i++;i<255){
	//	if(*(buff+i)){
  			glLoadIdentity();
		//	glRotated(45,1,1,0);
		//	glTranslated(x,y,z);
		//	glTranslated(i%16,i/16,0);
			glColor4d(255,255,255,255);
			glutSolidCube(10);
	//	}
	}

}
void
ranbowpage(char * buff)
{
	int i=0;
	for(i=0;i<256;i++)
		*(buff+i)=i;

}
void
player(double x, double y, double z)
{
	glColor4d(1,0.25,0,1);
	tcube(x,y,z,CUBESIZE);
}
void
grid(double x, double y, double z, double s, double px, double py, double pz)
{

	//glColor4d(1,1,1,0.01);
	double lx=x,ly=y,lz=z;
	for(lx=x;lx>=0;lx=lx-1){
		for(ly=y;ly>=0;ly=ly-1){
			for(lz=z;lz>=0;lz=lz-1){
				glLoadIdentity();tcube(lx*s+px-(x/2)+0.5,ly*s+py-(y/2)+0.5,lz*s+pz-z+0.5,s);
			}
		}
	}
				
}
void	
display(void)	
{
	glClearColor(0,0,0,0);
	glColor3d(0,0,255);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	glColor4d(1,1,1,0.005);
	//grid(16,16,16,CUBESIZE,playerx,playery,playerz);
	glColor4d(0.5,1,0.5,0.05);
	grid(16,16,0,CUBESIZE,playerx,playery,-16);
	glColor4d(1,0.5,0.5,0.05);
	grid(16,0,16,CUBESIZE,playerx,-8,playerz);
	glColor4d(0.5,0.5,1,0.05);
	grid(0,16,16,CUBESIZE,24,playery,playerz);
	
	player(8,8,8);
	drawpage(0,0,0,(char *)&coremem);
	glutSwapBuffers();

}
void	
reshape(int width, int height)	
{

	glViewport(0,0,width,height);
  	glMatrixMode(GL_PROJECTION);                        // Select The Projection Matrix
   	 glLoadIdentity();                           // Reset The Projection Matrix
 
    	// Calculate The Aspect Ratio Of The Window
    	//gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);
 	//glMatrixMode(GL_MODELVIEW);                     // Select The Modelview Matrix
    	//glLoadIdentity();                           // Reset The Modelview Matrix

	//set the coordinate system, with the origin in the top left
	glOrtho(-width, width, height, -height,-4096,+4096);
	glMatrixMode(GL_MODELVIEW);

}
void	
idle(void)
{
	glutPostRedisplay();
	usleep(100*100); //forking laptop is catching on fire... let's block the cpu some...
	usleep(100*100);
}
void
keyboard(unsigned char key, int x, int y)
{
//TODO: I don't think were going to do any reall time anything, but if we were, a keyup keydown thing might be nice...

    int a=0;
    int ox=playerx,oy=playery;
	printf(" k:%d\n", key);
	switch (key) {
		case 119: playerz=playerz-CUBESIZE; break; // key W
		case 115: playerz=playerz+CUBESIZE; break;  // key S
		case 97:  playerx=playerx-CUBESIZE; break; // key A	
		case 100: playerx=playerx+CUBESIZE; break; // key D	
		case 27: break; // key ESC	
		case 114: playery=playery+CUBESIZE;  break; //key R
		case 102: playery=playery-CUBESIZE;  break; //key F
	}
	printf("X:%f	Y:%f	Z:%f\n",playerx,playery,playerz);
	

}


int	
main(int argc, char *argv)
{

	//a	basic	set	up...

	glutInit(&argc,	&argv);	

	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE|GLUT_DEPTH);
	glutInitWindowSize(640,	480);
	glutCreateWindow("space*bert");

	//pass	the callbacks
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc (keyboard);
	glutIdleFunc(idle);
	glEnable(GL_BLEND); //alpha doesn't work without these
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	//glClearDepth(1.0f);                         // Depth Buffer Setup
	//glEnable(GL_DEPTH_TEST);                        // Enables Depth Testing
	//glDepthFunc(GL_LEQUAL);                         // The Type Of Depth Test To Do
	ranbowpage((char *)&coremem);
	glutMainLoop();
	return	0;

}
