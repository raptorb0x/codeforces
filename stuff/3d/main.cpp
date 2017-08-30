#include <stdio.h>
#include <math.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <malloc.h>
using namespace std;
int a=400;
float PI=3.145;
int main()
{
    int xc,yc,xcc,ycc,xr,yr,yc2,xy[4][2],xy2[4][2],xy3[4][2];
    char c;
    float i=0,k=PI/2;
    initwindow(800, 800, "some  sh*t", 200, 200);
    xcc=getmaxx()/2;
    ycc=getmaxy()/2;
    do{
    cleardevice();
    xc=xcc;//+(a/2)*sin(i);
    yc=ycc;//+(a/2)*cos(k);
    //yc2=ycc+(a/2)*cos(PI/2+k);
    ellipse(xc,yc,0,0,a/2,(a/2)*sin(k));
    ellipse(xc,yc,0,0,a/2,(a/2)*sin(PI/2+k));
    ellipse(xc,yc,0,0,(a/2)*cos(PI/2+k),(a/2));
    //circle(xcc,ycc,a/2);
    xy[0][0]=xc+(a/2)*sin(i-PI/4);
    xy[0][1]=yc-(a/2)*sin(k)*cos(i-PI/4);
    xy[1][0]=xc+(a/2)*sin(i+PI/4);
    xy[1][1]=yc-(a/2)*sin(k)*cos(i+PI/4);
    xy[2][0]=xc+(a/2)*sin(i+3*PI/4);
    xy[2][1]=yc-(a/2)*sin(k)*cos(i+3*PI/4);
    xy[3][0]=xc+(a/2)*sin(i+5*PI/4);
    xy[3][1]=yc-(a/2)*sin(k)*cos(i+5*PI/4);

    xy2[0][0]=xc+(a/2)*cos(PI/2+k)*sin(i-PI/4);
    xy2[0][1]=yc-(a/2)*cos(i-PI/4);
    xy2[1][0]=xc+(a/2)*cos(PI/2+k)*sin(i+PI/4);
    xy2[1][1]=yc-(a/2)*cos(i+PI/4);
    xy2[2][0]=xc+(a/2)*cos(PI/2+k)*sin(i+3*PI/4);
    xy2[2][1]=yc-(a/2)*cos(i+3*PI/4);
    xy2[3][0]=xc+(a/2)*cos(PI/2+k)*sin(i+5*PI/4);
    xy2[3][1]=yc-(a/2)*cos(i+5*PI/4);

    xy3[0][0]=xc+(a/2)*sin(i-PI/4);
    xy3[0][1]=yc-(a/2)*sin(PI/2+k)*cos(i-PI/4);
    xy3[1][0]=xc+(a/2)*sin(i+PI/4);
    xy3[1][1]=yc-(a/2)*sin(PI/2+k)*cos(i+PI/4);
    xy3[2][0]=xc+(a/2)*sin(i+3*PI/4);
    xy3[2][1]=yc-(a/2)*sin(PI/2+k)*cos(i+3*PI/4);
    xy3[3][0]=xc+(a/2)*sin(i+5*PI/4);
    xy3[3][1]=yc-(a/2)*sin(PI/2+k)*cos(i+5*PI/4);

    circle(xy3[0][0],xy3[0][1],5);
    circle(xy3[1][0],xy3[1][1],5);
    circle(xy3[2][0],xy3[2][1],5);
    circle(xy3[3][0],xy3[3][1],5);

    circle(xy[0][0],xy[0][1],5);
    circle(xy[1][0],xy[1][1],5);
    circle(xy[2][0],xy[2][1],5);
    circle(xy[3][0],xy[3][1],5);

    circle(xy2[0][0],xy2[0][1],5);
    circle(xy2[1][0],xy2[1][1],5);
   circle(xy2[2][0],xy2[2][1],5);
circle(xy2[3][0],xy2[3][1],5);

    line(xy[0][0],xy[0][1],xy2[2][0],xy2[2][1]);
    line(xy[1][0],xy[1][1],xy2[3][0],xy2[3][1]);
    line(xy[2][0],xy[2][1],xy2[0][0],xy2[0][1]);
    line(xy[3][0],xy[3][1],xy2[1][0],xy2[1][1]);

    line(xy[0][0],xy[0][1],xy2[0][0],xy2[0][1]);
    line(xy[1][0],xy[1][1],xy2[1][0],xy2[1][1]);
    line(xy[2][0],xy[2][1],xy2[2][0],xy2[2][1]);
    line(xy[3][0],xy[3][1],xy2[3][0],xy2[3][1]);
    line(xy[0][0],xy[0][1],xy[1][0],xy[1][1]);
    line(xy[1][0],xy[1][1],xy[2][0],xy[2][1]);
    line(xy[2][0],xy[2][1],xy[3][0],xy[3][1]);
    line(xy[3][0],xy[3][1],xy[0][0],xy[0][1]);

    line(xy2[0][0],xy2[0][1],xy2[1][0],xy2[1][1]);
    line(xy2[1][0],xy2[1][1],xy2[2][0],xy2[2][1]);
    line(xy2[2][0],xy2[2][1],xy2[3][0],xy2[3][1]);
    line(xy2[3][0],xy2[3][1],xy2[0][0],xy2[0][1]);

    line(xy3[0][0],xy3[0][1],xy3[1][0],xy3[1][1]);
    line(xy3[1][0],xy3[1][1],xy3[2][0],xy3[2][1]);
    line(xy3[2][0],xy3[2][1],xy3[3][0],xy3[3][1]);
    line(xy3[3][0],xy3[3][1],xy3[0][0],xy3[0][1]);

    line(xy[0][0],xy[0][1],xy3[2][0],xy3[2][1]);
    line(xy[1][0],xy[1][1],xy3[3][0],xy3[3][1]);
    line(xy[2][0],xy[2][1],xy3[0][0],xy3[0][1]);
    line(xy[3][0],xy[3][1],xy3[1][0],xy3[1][1]);

    line(xy[0][0],xy[0][1],xy3[0][0],xy3[0][1]);
    line(xy[1][0],xy[1][1],xy3[1][0],xy3[1][1]);
    line(xy[2][0],xy[2][1],xy3[2][0],xy3[2][1]);
    line(xy[3][0],xy[3][1],xy3[3][0],xy3[3][1]);

    i+=0.001;

    //getch();
    delay(0);
    swapbuffers();
    if(kbhit())
    {
        c=getch();
        if(c==27) return 0;
        else k+=0.0001;
    }
    } while(1);
    return 0;
}
