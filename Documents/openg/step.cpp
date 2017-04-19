#include <GL/freeglut.h>
#include<iostream>
#include <stdlib.h>
#include<GL/glut.h>
#include <string>
void myInit(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glColor3f(255.0f,255.0f,255.0f);
glPointSize(10.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 1024,0, 720);
}
void plotPoint(float x, float y)
{
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
}

void printText(float r, float g, float b, float posx, float posy, std::string desc)
{
  glColor3f(r,g,b);     
  glRasterPos2f(posx,posy);
  for (int i = 0; i < desc.size(); ++i) 
  glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, desc[i]);
}
void mouse(int button, int state, int xMouse, int yMouse) 
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) 
    {
      plotPoint(xMouse,720-yMouse);
      glFlush();  
    }

}

void display() 
{  
    glClearColor(0, 0, 0.0, 1);                     //font display
    glColor3f(0.0, 0.0, 0.0);  
    glClear(GL_COLOR_BUFFER_BIT);
    printText(0.0, 255.0, 0.0, 15.0, 4.0,"X");
    printText(0.0, 255.0, 0.0, 14.0, 153.0,"X");
    printText(0.0, 255.0, 0.0, 14.0, 303.0,"X"); 
    printText(0.0, 255.0, 0.0, 64.0, 78.0,"X");
    printText(0.0, 255.0, 0.0, 63.0, 152.0,"X");
    printText(0.0, 255.0, 0.0, 63.0, 226.0,"X");
    printText(0.0, 255.0, 0.0, 113.0, 3.0,"X");
    printText(0.0, 255.0, 0.0, 114.0, 78.0,"X");
    printText(0.0, 255.0, 0.0, 113.0, 152.0,"X"); 
    printText(0.0, 255.0, 0.0, 114.0, 228.0,"X");
    printText(0.0, 255.0, 0.0, 114.0, 303.0,"X");
    printText(0.0, 255.0, 0.0, 214.0, 4.0,"X");
    printText(0.0, 255.0, 0.0, 214.0, 78.0,"X");
    printText(0.0, 255.0, 0.0, 214.0, 153.0,"X");
    printText(0.0, 255.0, 0.0, 214.0, 228.0,"X");
    printText(0.0, 255.0, 0.0, 214.0, 303.0,"X");
    printText(0.0, 255.0, 0.0, 314.0, 3.0,"X");
    printText(0.0, 255.0, 0.0, 314.0, 77.0,"X");

    printText(255.0, 0.0, 0.0, 314.0, 228.0,"O");
    printText(255.0, 0.0, 0.0, 314.0, 303.0,"O");
    printText(255.0, 0.0, 0.0, 414.0, 303.0,"O");
    printText(255.0, 0.0, 0.0, 414.0, 228.0,"O"); 
    printText(255.0, 0.0, 0.0, 414.0, 153.0,"O");
    printText(255.0, 0.0, 0.0, 414.0, 78.0,"O");
    printText(255.0, 0.0, 0.0, 414.0, 4.0,"O");
    printText(255.0, 0.0, 0.0, 513.0, 304.0,"O"); 
    printText(255.0, 0.0, 0.0, 514.0, 228.0,"O");
    printText(255.0, 0.0, 0.0, 514.0, 153.0,"O");
    printText(255.0, 0.0, 0.0, 514.0, 78.0,"O");
    printText(255.0, 0.0, 0.0, 514.0, 4.0,"O"); 
    printText(255.0, 0.0, 0.0, 564.0, 228.0,"O");
    printText(255.0, 0.0, 0.0, 564.0, 153.0,"O");
    printText(255.0, 0.0, 0.0, 564.0, 78.0,"O");
    printText(255.0, 0.0, 0.0, 614.0, 303.0,"O"); 
    printText(255.0, 0.0, 0.0, 614.0, 153.0,"O");
    printText(255.0, 0.0, 0.0, 614.0, 4.0,"O");
}    

void myDisplay(void)
{

glTranslatef(180.0f, 200.0f, 0.0f);
//glClear(GL_COLOR_BUFFER_BIT);
display();
glBegin(GL_LINE_LOOP);//1st trinagle
glColor3f(255.0, 255.0, 255.0);
glLineWidth(10.0); 
glVertex2i(20.0, 10.0);
glVertex2i(120.0, 160.0);
glVertex2i(20.0, 310.0);
glEnd();

       
glBegin(GL_LINE_LOOP);     //2nd trinagle
glLineWidth(10.0);
glVertex2i(620.0, 10.0);
glVertex2i(520.0, 160.0);
glVertex2i(620.0, 310.0);
glEnd();

glBegin(GL_LINES);     //1st trinagle inner lines
glLineWidth(10.0);
glVertex2i(20.0, 160.0);
glVertex2i(120.0, 160.0);
glVertex2i(70.0, 85.0);
glVertex2i(70.0, 235.0);
glEnd();

glBegin(GL_LINES);     //2nd trinagle inner lines
glLineWidth(10.0);
glVertex2i(620.0, 160.0);
glVertex2i(520.0, 160.0);
glVertex2i(570.0, 85.0);
glVertex2i(570.0, 235.0);
glEnd();

glBegin(GL_LINE_LOOP);   //rectangle part
glLineWidth(10.0);
glVertex2i(120.0, 10.0);
glVertex2i(120.0, 310.0);
glVertex2i(520.0, 310.0);
glVertex2i(520.0, 10.0);
glEnd();
 
glBegin(GL_LINE_LOOP);   //line 1 squares     
glLineWidth(10.0);
glVertex2i(120.0, 10.0);
glVertex2i(120.0, 85.0);
glVertex2i(220.0, 85.0);
glVertex2i(220.0, 10.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(120.0, 85.0);
glVertex2i(120.0, 160.0);
glVertex2i(220.0, 160.0);
glVertex2i(220.0, 85.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(120.0, 160.0);
glVertex2i(120.0, 235.0);
glVertex2i(220.0, 235.0);
glVertex2i(220.0, 160.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(120.0, 235.0);
glVertex2i(120.0, 310.0);
glVertex2i(220.0, 310.0);
glVertex2i(220.0, 235.0);
glEnd();

glBegin(GL_LINE_LOOP);        //line2
glLineWidth(10.0);
glVertex2i(220.0, 10.0);
glVertex2i(220.0, 85.0);
glVertex2i(320.0, 85.0);
glVertex2i(320.0, 10.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(220.0, 85.0);
glVertex2i(220.0, 160.0);
glVertex2i(320.0, 160.0);
glVertex2i(320.0, 85.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(220.0, 160.0);
glVertex2i(220.0, 235.0);
glVertex2i(320.0, 235.0);
glVertex2i(320.0, 160.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(220.0, 235.0);
glVertex2i(220.0, 310.0);
glVertex2i(320.0, 310.0);
glVertex2i(320.0, 235.0);
glEnd();

glBegin(GL_LINE_LOOP);        //line3
glLineWidth(10.0);
glVertex2i(320.0, 10.0);
glVertex2i(320.0, 85.0);
glVertex2i(420.0, 85.0);
glVertex2i(420.0, 10.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(320.0, 85.0);
glVertex2i(320.0, 160.0);
glVertex2i(420.0, 160.0);
glVertex2i(420.0, 85.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(320.0, 160.0);
glVertex2i(320.0, 235.0);
glVertex2i(420.0, 235.0);
glVertex2i(420.0, 160.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(320.0, 235.0);
glVertex2i(320.0, 310.0);
glVertex2i(420.0, 310.0);
glVertex2i(420.0, 235.0);
glEnd();

glBegin(GL_LINE_LOOP);        //line4
glLineWidth(10.0);
glVertex2i(420.0, 10.0);
glVertex2i(420.0, 85.0);
glVertex2i(520.0, 85.0);
glVertex2i(520.0, 10.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(420.0, 85.0);
glVertex2i(420.0, 160.0);
glVertex2i(520.0, 160.0);
glVertex2i(520.0, 85.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(420.0, 160.0);
glVertex2i(420.0, 235.0);
glVertex2i(520.0, 235.0);
glVertex2i(520.0, 160.0);
glEnd();

glBegin(GL_LINE_LOOP);        
glLineWidth(10.0);
glVertex2i(420.0, 235.0);
glVertex2i(420.0, 310.0);
glVertex2i(520.0, 310.0);
glVertex2i(520.0, 235.0);
glEnd();

glBegin(GL_LINE_LOOP);     //diagonal line
glLineWidth(10.0);
glVertex2i(120.0, 10.0);
glVertex2i(520.0, 310.0);
glEnd();

glBegin(GL_LINE_LOOP);     //diagonal line
glLineWidth(10.0);
glVertex2i(120.0, 310.0);
glVertex2i(520.0, 10.0);
glEnd();

glBegin(GL_LINE_LOOP);     //midline1
glLineWidth(10.0);
glVertex2i(120.0, 160.0);
glVertex2i(320.0, 10.0);
glVertex2i(520.0, 160.0);
glVertex2i(320.0, 310.0);
glEnd();

glFlush();
}
           

int main(int argc,char**argv)
{
 glutInit(&argc,argv);
 
 glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
 glutInitWindowSize(1320,820);
 glutInitWindowPosition(50,100);
 glutCreateWindow("18 Gutte Game");
 
 glutDisplayFunc(myDisplay);
  
 glutMouseFunc(mouse);
 myInit();
 glutMainLoop();
return 0;
}
