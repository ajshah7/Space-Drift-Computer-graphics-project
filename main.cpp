
/* 
  Build by Ajmal Shah
  GitHub : www.github.com/ajshah7
 
*/
/* 
  Note : After running the program , PRESS "ENTER" TO SEE THE OUTPUT FROM THE BLANK WELCOME SCREEN, PRESS "SPACE BAR" TO PAUSE
         and PRESS "ESC" TO QUIT. 
*/
          
          
#include<GLUT/GLUT.h> // if usnig windows softwares to run, use #include<gl/glut.h> instead.
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

#define KEY_ESC 27

const float DEG2RAD = 3.14159/180;
void display();
void stars();
int p;
void stars1();
void rocket_in_motion();
void mars(float radius);
GLuint drawMode = GL_POINTS;
float b = 1.0;
float z = 3.0;

float i,j,count=0,count1=0,count3=0,flag=0,flag1=0,t=0,f=0,flag3=0, flags=0;

void frontscreen()
{
    // this function is for initial blank screen
}


void display()
{
    
    rocket_in_motion();
}

void stars()
{
    
    
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    
    glPointSize(z);
    glLineWidth(b);
    
    
    glBegin(drawMode);
    for (int count=0; count<=12; count++)
    {
        int p1 = rand() % 700 + 1;
        int p2 = rand() % 700 + 1;
        
        glVertex2f(p1, p2);
        glVertex2f(p2, p1);
    }
    glEnd();
    glBegin(drawMode);
    for (int count=0; count<=12; count++)
    {
        //srand(time(NULL));
        int p3 = rand() % 600 + 1;
        int p4 = rand() % 600 + 1;
        
        glVertex2f(p3, p4);
        glVertex2f(p4, p3);
    }
    glEnd();
    
    glBegin(drawMode);
    for (int count=0; count<=12; count++)
    {
        //srand(time(NULL));
        int p3 = rand() % 650 + 1;
        int p4 = rand() % 650 + 1;
        
        glVertex2f(p3, p4);
        glVertex2f(p4, p3);
    }
    glEnd();
    glFlush();
}


void rocket_in_motion()
{
    count++;
    for(i=195;i<=200;i++)
    {
        if(count>=5)
        {
            glClearColor(0.0 ,0.0 ,0.0,1.0);
            glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
            if(flag1==0)
            {
                stars();
                flag1=1;
            }
            else
            {
                flag1=0;
            }
            
        }
        else
        {
            glClearColor(0.0  ,0.0 ,0.0,1.0);
            glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        }
        if(count>=100)
            mars(15.0);
        glColor3f(0.8,0.498039 ,0.196078);
        glBegin(GL_POLYGON);//fly suit
        glVertex2f(207.5,20.0+i);
        glVertex2f(262.5,20.0+i);
        glVertex2f(262.5,120.0+i);
        glVertex2f(237.5,120.0+i);
        
        
        glEnd();
        
        glColor3f(1.0,0.0,0.0);//bonnet
        glBegin(GL_POLYGON);//front
        glVertex2f(237.5,120.0+i);
        glVertex2f(262.5,120.0+i);
        glVertex2f(250,170.0+i);
        glEnd();
        glColor3f(1.0,0.0,0.0);
        
        glEnd();
        if((p%2)==0)
            glColor3f(1.0,0.25,0.0);
        else
            glColor3f(1.0,0.816,0.0);
        
        glBegin(GL_POLYGON);//outer fume
        glVertex2f(237.5,20+i);
        glVertex2f(234.16,16.66+i);
        glVertex2f(230.82,13.32+i);
        glVertex2f(227.48,9.98+i);
        glVertex2f(224.14,6.64+i);
        glVertex2f(220.8,3.3+i);
        glVertex2f(217.5,0+i);
        glVertex2f(221.56,-5+i);
        glVertex2f(225.62,-10+i);
        glVertex2f(229.68,-15+i);
        glVertex2f(233.74,-20+i);
        glVertex2f(237.8,-25+i);
        glVertex2f(241.86,-30+i);
        glVertex2f(245.92,-35+i);
        glVertex2f(250,-40+i);
        glVertex2f(254.06,-35+i);
        glVertex2f(258.12,-30+i);
        glVertex2f(262.18,-25+i);
        glVertex2f(266.24,-20+i);
        glVertex2f(270.3,-15+i);
        glVertex2f(274.36,-10+i);
        glVertex2f(278.42,-5+i);
        glVertex2f(282.5,0+i);
        glVertex2f(278.5,4+i);
        glVertex2f(274.5,8+i);
        glVertex2f(270.5,12+i);
        glVertex2f(266.5,16+i);
        glVertex2f(262.5,20+i);//28 points
        glEnd();
        
        if((p%2)==0)
            glColor3f(1.0,0.816,0.0);
        else
            glColor3f(1.0,0.25,0.0);
        
        glBegin(GL_POLYGON);//inner fume
        glVertex2f(237.5,20+i);
        glVertex2f(236.5,17.5+i);
        glVertex2f(235.5,15+i);
        glVertex2f(234.5,12.5+i);
        glVertex2f(233.5,10+i);
        glVertex2f(232.5,7.5+i);
        glVertex2f(236,5+i);
        glVertex2f(239.5,2.5+i);
        glVertex2f(243,0+i);
        glVertex2f(246.5,-2.5+i);
        glVertex2f(250,-5+i);
        glVertex2f(253.5,-2.5+i);
        glVertex2f(257,0+i);
        glVertex2f(260.5,2.5+i);
        glVertex2f(264,5+i);
        glVertex2f(267.5,7.5+i);
        glVertex2f(266.5,10+i);
        glVertex2f(265.5,12.5+i);
        glVertex2f(264.5,15+i);
        glVertex2f(263.5,17.5+i);
        glVertex2f(262.5,20+i);//21 points
        
        glEnd();
        p=p+1;
        
        
        for(j=0;j<=1000000;j++)
            ;
        glutSwapBuffers();
        glutPostRedisplay();
        glFlush();
    }
}



void mars(float radius)
{
    
    glBegin(GL_POLYGON);
    for (int i=0; i<=359; i++)
    {
        float degInRad = i*DEG2RAD;
        glVertex2f(300+f+cos(degInRad)*radius,500-t+(sin(degInRad))
                   
                   *radius);//100,100 specifies centre of the circle
    }
    glEnd();
    t=t+0.1;
    f=f+0.1;
}


void myinit()
{
    glClearColor(0.196078  ,0.6 ,0.8,1.0);
    glPointSize(1.0);
    gluOrtho2D(0.0,499.0,0.0,499.0);
}

void mydisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    if(flag==0)
        frontscreen ();
    if(flag==1)
        display();
}

void keyboard(unsigned char key, int x, int y)
{
    
    switch (key)
    {
        case 27:              //Ascii of 'ESCAPE' key is 27
            exit (0);
            break;
        case 13:if(flag==0)  //Ascii of 'ENTER' key is 13
            flag=1;
            break;
        case 32 :           //Ascii of 'SPACEBAR' key is 32
            flag=0;
            break;
    }
    
    
}


int main(int argc,char*argv[])
{
    glutInit(&argc,argv);
    printf("lol");
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Space Drift");
    
    glutIdleFunc(mydisplay);
    glutDisplayFunc(mydisplay);
    glutKeyboardFunc(keyboard);
    myinit();
    
    
    glutMainLoop();
    return 0;
}


