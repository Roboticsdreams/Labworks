#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
main()
{
int gd=DETECT,gm;
char msg[80];
initgraph(&gd,&gm,"");
outtextxy(0,0,"Demonestration of Moveto,Lineto,Moverel,Linerel");
rectangle(0,10,639,479);
line(100,50,100,350);
moveto(300,50);
lineto(300,350);
moverel(200,-300);
linerel(0,300);
outtextxy(104,50,"(100,50)");
outtextxy(104,350,"(100,350)");
outtextxy(90,375,"line");
outtextxy(304,50,"(300,50)");
outtextxy(304,350,"(300,350)");
outtextxy(280,375,"moveto,lineto");
outtextxy(504,50,"(500,50)");
outtextxy(504,350,"(500,350)");
outtextxy(480,375,"moverel,linerel");
getch();
closegraph();
restorecrtmode();
}