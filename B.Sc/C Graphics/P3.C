#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,poly[20]={200,200,300,400,400};
initgraph(&gd,&gm," ");
setcolor(6);
circle(450,250,100);
outtextxy(420,250,"circle");
setcolor(7);
line(160,450,250,450);
outtextxy(140,430,"line");
setcolor(9);
ellipse(200,250,0,360,200,50);
outtextxy(140,250,"ellipse");
setcolor(12);
arc(350,450,45,185,100);
outtextxy(330,410,"arc");
setcolor(5);
setfillstyle(9,50);
fillpoly(3,poly);
setcolor(14);
rectangle(500,150,300,50);
outtextxy(340,100,"rectangle");
getch();
}