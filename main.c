#include <GLUT/glut.h>
#include <unistd.h>
#include <stdio.h>
#include "./bitmaps.h"
#define MAP_WIDTH 8
#define MAP_HIGHT 8
#define GOF	20
#define P_W	20
#define P_O	6
#define P_OY	(-10)
//OFFSET from edge of screen
char *ground[MAP_WIDTH*MAP_HIGHT+16];
char *worldmaptiles[MAP_WIDTH*MAP_HIGHT+16];
int playerx=20,playery=80;
int worldcollision[MAP_WIDTH*MAP_HIGHT+16];
int *ccsemafor=&worldcollision; //current collision semaphor


void
leground(void)
{
	int x=0,y=0;
	int mapx,mapy;

	for(mapy=0;mapy<=MAP_HIGHT;mapy++){
		for(mapx=0;mapx<=MAP_WIDTH;mapx++)
		{
			glRasterPos2i(x,y+GOF);
			glDrawPixels(20,20,GL_RGB, GL_UNSIGNED_BYTE,ground[mapx+(mapy*MAP_WIDTH)]);
			x=x+20;
		}
		x=0;
		y=y+20;
	}
/*	glRasterPos2i(0,100);
	glDrawPixels(20,20,GL_RGB, GL_UNSIGNED_BYTE,wallel);
	glRasterPos2i(20,100);
	//glBitmap(8,8,8,0,0,0,abitmap); 	
	glDrawPixels(20,20,GL_RGB, GL_UNSIGNED_BYTE,wall);
	glRasterPos2i(40,100);
	glDrawPixels(20,20,GL_RGB, GL_UNSIGNED_BYTE,wall);
	glRasterPos2i(60,100);
	glDrawPixels(20,20,GL_RGB, GL_UNSIGNED_BYTE,wall);
	glRasterPos2i(80,100);
	glDrawPixels(20,20,GL_RGB, GL_UNSIGNED_BYTE,waller);*/

}
void
letiles(char *tiles[])
{
	int x=0,y=0;
	int mapx,mapy;
	char *tile;

	for(mapy=0;mapy<=MAP_HIGHT;mapy++){
		for(mapx=0;mapx<=MAP_WIDTH;mapx++)
		{

			glRasterPos2i(x,y+GOF);
			glBegin(GL_LINES);
			glVertex2i(x,	y);
			glVertex2i(x,	y+20);
			glEnd();
			glBegin(GL_LINES);
			glVertex2i(x+20,y);
			glVertex2i(x,y);
			glEnd();
			tile=*(tiles+mapx+(mapy*MAP_WIDTH));
			if(tile)
				glDrawPixels(20,20,GL_RGBA, GL_UNSIGNED_BYTE,tile);
			x=x+20;
		}
		x=0;
		y=y+20;
	}
}
void //draw a band of marry men
leband(void){
	glRasterPos2i(playerx,playery);
	glDrawPixels(20,20,GL_RGBA, GL_UNSIGNED_BYTE,bigworldplayer);
}
void	
display(void)	
{
	glClearColor(0,0,0,0);
	glColor3d(0,0,255);

	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

/*	glBegin(GL_QUADS);
	glVertex2i(0,	0);
	glVertex2i(0,	128);
	glVertex2i(128,	128);
	glVertex2i(128,	0);
	glEnd();*/

	leground();
	leband();
	letiles(&worldmaptiles[0]);

	glutSwapBuffers();

}

void	
reshape(int width, int height)	
{

	glViewport(0,0,20*8,20*8);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	//set the coordinate system, with the origin in the top left
	gluOrtho2D(0, 20*8, 20*8, 0);
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

    int a=0;
    int ox=playerx,oy=playery;
	printf(" k:%d\n", key);
	switch (key) {
		case 119: playery=playery--; break; // key W
		case 115: playery-playery++; break;  // key S
		case 97:  playerx=playerx--; break; // key A	
		case 100: playerx=playerx++; break; // key D	
		case 27: break; // key ESC	
		case 114: break; //key R
		case 32: break; //key SPACE
		case 108: break; //key L
	}
	//TODO: This is retarded
	if(*(ccsemafor+
		(
			((playerx+P_O)/P_W)+(
				((playery+P_OY)/P_W)*MAP_WIDTH)
			)
		)
	){
		playerx=ox;
		playery=oy;
	}
	if(*(ccsemafor+
		(
			((playerx+(P_O*2))/P_W)+(
				((playery+(P_OY))/P_W)*MAP_WIDTH)
			)
		)
	){
		playerx=ox;
		playery=oy;
	}
	if(*(ccsemafor+
		(
			((playerx+(P_O*2))/P_W)+(
				((playery+(P_OY/2))/P_W)*MAP_WIDTH)
			)
		)
	){
		playerx=ox;
		playery=oy;
	}
	printf("X:%d	Y:%d\n",((playerx+P_O)/P_W),((playery+P_OY)/P_W));
	

}


void
loadmap()
{
	int i=0;
	for(i=0;i <MAP_HIGHT*MAP_WIDTH+16; i++){ //init the map
		ground[i]=&grassyearth;
	}
	//TODO: better way to load maps, especailly when entering and exiting rooms
	//perhaps have a map pointer that the display functions get called with
	ground[1]=&wallel;
	ground[2]=&wall;
	ground[3]=&waller;
	ground[17]=&wallel;
	ground[19]=&waller;
	ground[60]=&wallel;
	ground[11]=&farmbig;
	worldcollision[1]++;
	worldcollision[2]++;
	worldcollision[3]++;
	worldcollision[17]++;
	worldcollision[19]++;
	worldcollision[60]++;
	worldcollision[10]++;
	worldmaptiles[10]=&keepbig;
	worldmaptiles[18]=&archbig;
		
}
int	
main(int argc, char *argv)
{

	//a	basic	set	up...
	loadmap();
	glutInit(&argc,	&argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE|GLUT_DEPTH);
	glutInitWindowSize(640,	480);
	//glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
	//create the window, the argument is the title
	glutCreateWindow("t'nother stupid game");

	//pass	the callbacks
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc (keyboard);
	glutIdleFunc(idle);
	glEnable(GL_BLEND); //alpha doesn't work without these
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	//SCREW GLUT!!! AND ALL THE EVENT DRIVEN PROGRAMING PARADIGMS!!!!! 
//THIS
//IS
//U N I X !!!!!!!!!!

//(and on unix, we do multiprograming, not this silly event driven sillyness)
//(whell, unix is actually a copyright owned by bell labs, this is really the "berkly software distrobution" but absolutely no one cares)
//DANG!!! ok, I geuss will just stick with that for now :( ......
	glutMainLoop();
//Maybe lator we'll use freeglut.... less greedy with le cpu....
	return	0;

}
