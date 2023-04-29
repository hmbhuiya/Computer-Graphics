#include<iostream>
#include<stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<windows.h>


void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);
//glTranslatef(0,100,0);
//glScalef(10.0, 10.0,0.0);
glPushMatrix();
glColor3ub(255,255,0);
glLineWidth(2);
glBegin(GL_LINES);
glVertex3i(-800,0,0);
glVertex3i(800,0,0);
glVertex3i(0,-600,0);
glVertex3i(0,600,0);
glEnd();
glPopMatrix();

/*glPushMatrix();//1st quad Color
glColor3f(0, 250, 154);
glBegin(GL_POLYGON);
glVertex2i(0,600);
glVertex2i(800,600);
glVertex2i(800,0);
glVertex2i(0,0);
glEnd();
glPopMatrix();*/

glPushMatrix();//Roof
glColor3f(0.855, 0.647, 0.125);
glBegin(GL_POLYGON);
glVertex2i(220,320);
glVertex2i(460,320);
glVertex2i(540,200);
glColor3f(0.824, 0.412, 0.118);
glVertex2i(320,200);
glEnd();
glPopMatrix();

glPushMatrix();// window wall
glColor3f(1.000, 0.498, 0.314);
glBegin(GL_POLYGON);
glVertex2i(240,300);
glVertex2i(320,200);
glVertex2i(320,0);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(180,0);
glVertex2i(180,180);
glEnd();


glColor3f(1.000, 1.000, 0.000);//window
glBegin(GL_POLYGON);
glVertex2i(220,140);
glVertex2i(280,140);
glVertex2i(280,80);
glVertex2i(220,80);
glEnd();

glColor3f(0.545, 0.000, 0.000);//window
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(220,140);
glVertex2i(280,140);
glVertex2i(280,80);
glVertex2i(220,80);
glVertex2i(220,140);
glVertex2i(220,80);
glVertex2i(280,140);
glVertex2i(280,80);

glEnd();
glPopMatrix();

glPushMatrix();//Roof PIPE
glColor3f(1.000, 0.271, 0.000);
glBegin(GL_POLYGON);
glVertex2i(220,320);
glVertex2i(240,300);
glColor3f(0.824, 0.412, 0.118);
glVertex2i(180,180);
glVertex2i(140,180);
glVertex2i(220,320);
glEnd();

glColor3f(1.000, 1.000, 1.000);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(150,200);
glVertex2i(190,200);
glVertex2i(170,240);
glVertex2i(210,240);
glVertex2i(195,280);
glVertex2i(230,280);
glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.722, 0.525, 0.043);//second roof
glBegin(GL_POLYGON);
glVertex2i(320,200);
glVertex2i(540,200);
glColor3f(0.855, 0.647, 0.125);
glVertex2i(620,100);
glVertex2i(400,100);
glEnd();

glColor3f(1.000, 0.498, 0.314);//Door right side wall
glBegin(GL_POLYGON);
glVertex2i(400,100);
glVertex2i(540,100);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(540,0);
glVertex2i(400,0);
glEnd();

glColor3f(1.000, 0.647, 0.000);//Door right window
glBegin(GL_POLYGON);
glVertex2i(420,60);
glVertex2i(520,60);
glVertex2i(520,20);
glVertex2i(420,20);
glEnd();

glColor3f(1.000, 0.549, 0.000);//Door right window
glBegin(GL_TRIANGLES);
glVertex2i(420,60);
glVertex2i(520,20);
glVertex2i(420,20);

glEnd();

glColor3f(0.412, 0.412, 0.412);//floor
glBegin(GL_POLYGON);
glVertex2i(400,0);
glVertex2i(540,0);
glColor3f(0.184, 0.310, 0.310);
glVertex2i(620,-60);
glVertex2i(460,-60);
glEnd();

glPushMatrix();
glColor3f(0.545, 0.000, 0.000);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2i(545,60);
glVertex2i(800,60);
glVertex2i(545,30);
glVertex2i(800,30);
glEnd();
glPopMatrix();


glColor3f(0.333, 0.420, 0.184);//home stand
glLineWidth(5);
glBegin(GL_LINES);
glVertex2i(620,100);
glVertex2i(620,-60);
glVertex2i(540,100);
glVertex2i(540,0);
glVertex2i(460,100);
glVertex2i(460,-60);
glVertex2i(400,100);
glVertex2i(400,0);
glEnd();
glPopMatrix();

glPushMatrix();
glColor3f(0.824, 0.412, 0.118);//Door Wall
glBegin(GL_POLYGON);
glVertex2i(320,200);
glVertex2i(400,100);
glVertex2i(400,0);

glVertex2i(380,0);
glVertex2i(380,100);
glVertex2i(340,100);
glColor3f(0.698, 0.133, 0.133);
glVertex2i(340,0);
glVertex2i(320,0);
glEnd();

glColor3f(0.000, 0.392, 0.000);//Door Side wall stand
glLineWidth(3);
glBegin(GL_LINES);
glVertex2i(320,200);
glVertex2i(320,0);
glEnd();

glColor3f(1.000, 1.000, 0.000);//Door
glBegin(GL_POLYGON);
glVertex2i(340,100);
glVertex2i(380,100);
glColor3f(1.000, 0.549, 0.000);
glVertex2i(380,0);
glVertex2i(340,0);

glEnd();
glPopMatrix();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(180,0);
glVertex2i(400,0);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(400,-20);
glVertex2i(160,-20);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(400,0);
glVertex2i(460,-60);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(460,-80);
glVertex2i(400,-20);
glEnd();

glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(460,-60);
glVertex2i(620,-60);
glColor3f(0.545, 0.271, 0.075);
glVertex2i(640,-80);
glVertex2i(460,-80);
glEnd();

glPushMatrix();
glColor3f(0.545, 0.000, 0.000);
glLineWidth(6);
glBegin(GL_LINES);
glVertex2i(650,80);
glVertex2i(650,0);
glVertex2i(690,80);
glVertex2i(690,0);
glVertex2i(730,80);
glVertex2i(730,0);
glVertex2i(770,80);
glVertex2i(770,0);
glVertex2i(570,80);
glVertex2i(570,0);
glVertex2i(605,80);
glVertex2i(605,0);

glEnd();
glPopMatrix();


glPushMatrix();
glColor3f(0.545, 0.271, 0.075);//2nd house roof
glBegin(GL_POLYGON);
glVertex2i(472,300);
glVertex2i(660,300);
glColor3f(0.722, 0.525, 0.043);
glVertex2i(600,200);
glVertex2i(540,200);
glEnd();

glColor3f(0.502, 0.000, 0.000);//bagan bera
glLineWidth(6);
glBegin(GL_LINES);

glVertex2i(720,300);
glVertex2i(720,240);
glVertex2i(740,320);
glVertex2i(740,260);
glVertex2i(760,340);
glVertex2i(760,280);
glVertex2i(780,360);
glVertex2i(780,300);

glVertex2i(700,260);
glVertex2i(800,360);

glColor3f(0.722, 0.525, 0.043);
glVertex2i(720,240);
glVertex2i(800,320);


glEnd();



glColor3f(0.502, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(660,300);
glVertex2i(740,200);
glVertex2i(700,200);
glVertex2i(648,280);
glEnd();

glPopMatrix();

glPushMatrix();
//2nd house door wall
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2i(648,280);
glVertex2i(700,200);
glVertex2i(700,120);
glVertex2i(605,120);
glVertex2i(600,125);
glVertex2i(600,200);
glEnd();

glColor3f(0.957, 0.643, 0.376);
glBegin(GL_TRIANGLES);
glVertex2i(540,200);
glVertex2i(600,200);
glVertex2i(600,125);
glEnd();
glPopMatrix();

glPushMatrix();//2nd house door
glColor3f(0.753, 0.753, 0.753);
glBegin(GL_POLYGON);
glVertex2i(630,200);
glVertex2i(680,200);
glVertex2i(680,120);
glVertex2i(630,120);
glEnd();

glColor3f(0.000, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(680,200);
glVertex2i(680,120);
glVertex2i(660,120);
glVertex2i(660,180);
glEnd();

glColor3f(0.300, 0.220, 0.060);
glBegin(GL_POLYGON);//2nd door front side
glVertex2i(600,120);
glVertex2i(720,120);
glVertex2i(720,100);
glVertex2i(620,100);
glEnd();

glColor3f(0.753, 0.753, 0.753);//2nd door window
glBegin(GL_TRIANGLES);
glVertex2i(559,180);
glVertex2i(580,180);
glVertex2i(580,155);
glEnd();

glPopMatrix();
glPushMatrix();
//glColor3f(0.647, 0.165, 0.165);

glPopMatrix();






glPushMatrix();//Boat start
glTranslatef(-200.0,170.0,0.0);

glColor3f(0.000, 0.392, 0.000);
glBegin(GL_POLYGON);
glVertex2i(-360,-280);
glVertex2i(-20,-280);
glColor3f(0.502, 0.000, 0.502);
glVertex2i(-20,-360);
glVertex2i(-360,-360);
glEnd();

glColor3f(0.000, 0.392, 0.000);
glBegin(GL_TRIANGLES);
glVertex2i(-500,-200);
glVertex2i(-360,-280);
glColor3f(0.502, 0.000, 0.502);
glVertex2i(-360,-360);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.000, 0.392, 0.000);
glVertex2i(-20,-280);
glColor3f(0.502, 0.000, 0.502);
glVertex2i(110,-200);
glVertex2i(-20,-360);
glEnd();


glColor3f(0.420, 0.557, 0.137);
glBegin(GL_TRIANGLES);
glVertex2i(-320,-180);
glVertex2i(-240,-280);
glVertex2i(-360,-280);
glEnd();

glColor3f(1.000, 0.498, 0.314);
glBegin(GL_POLYGON);
glVertex2i(-320,-180);
glVertex2i(-100,-180);
glVertex2i(-40,-280);
glVertex2i(-240,-280);
glEnd();
glPopMatrix();//BOat end








glFlush();
}
void init(void)
{
/* select clearing (background) color */
glClearColor(0, 0, 0,0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-800.0,800, -600.0,600);
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(800, 600);
glutInitWindowPosition(300,0);
glutCreateWindow("Houses");
init();
glutDisplayFunc(display);
//glutFullScreen();
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

