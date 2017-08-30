#include <stdio.h>
#include <math.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <malloc.h>
using namespace std;
int main(void)
{
    int xc,yc,xc1,xc2,yc1,yc2,r1=40,r2=20,r3=10,l1=120,l2=20,gr1=DETECT,gr2,dx,dy;
    float i=0;
    void far *buf1,*buf2,*buf3;
    //initgraph(&gr1,&gr2,"C:\\TC\\BGI");
    initwindow(800, 800, "sol+geo/mun", 200, 200);
    setbkcolor(BLACK);
    xc=getmaxx()/2;
    yc=getmaxy()/2;
    xc1=xc+r1+l1;
    xc2=xc+l1+l2+r1+r2;
    //circle(xc,yc,r1);
    //setfillstyle(SOLID_FILL, LIGHTRED);
    //floodfill(xc,yc,0);
    //fillellipse(xc,yc,r1,r1);
    //circle(xc1,yc,r2);
    //circle(xc2,yc,r3);
    buf1=malloc(imagesize(xc1-r2,yc-r2,xc1+r2,yc+r2));
    readimagefile("earth.jpg",0,0,r2*2,r2*2);
    getimage(0,0,2*r2,2*r2,buf1);
    readimagefile("moon.jpg",0,0,r3*2,r3*2);
    buf2=malloc(imagesize(xc2-r3,yc-r3,xc2+r3,yc+r3));
    getimage(0,0,2*r3,2*r3,buf2);
    buf3=malloc(imagesize(xc-r1,yc-r1,xc+r1,yc+r1));
    readimagefile("sun.jpg",0,0,r1*2,r1*2);
    getimage(0,0,2*r1,2*r1,buf3);
    //getch();
    do
    {
        cleardevice();
        putimage(xc-r1,yc-r1,buf3,1);
        circle(xc,yc,r1+r2+l1);
        i+=0.001;
        putimage(xc-r2-(r1+l1+r2)*cos(i),yc-r2-(l1+r1+r2)*sin (i),buf1,0);
        circle(xc-(r1+l1+r2)*cos(i),yc-(l1+r1+r2)*sin (i),r2+r3+l2);
        putimage((xc-r2-(r1+l1+r2)*cos(i))+r2-r3-(r2+l2+r3)*cos(-2*i),(yc-r2-(l1+r1+r2)*sin(i))+r2-r3-(r2+l2+r3)*sin(-2*i),buf2,1);
        delay(1);
        swapbuffers();
    }while(!kbhit());
}

