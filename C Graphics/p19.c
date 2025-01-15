/*Draw different shapes*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm,x,y;
int array[]={540,220,590.270,570,320,510,320,490,270,540,220};
initgraph(&gd,&gm," ");
x=getmaxx();
y=getmaxy();
setcolor(WHITE);
rectangle(x/30+15,y/20,x/5,y/5);
outtextxy(x/30+15,y/18+15,"Rectangle");
circle(x/2,y/6,75);
putpixel(x/2,y/6,WHITE);
outtextxy(x/2-textwidth("circle")/2,y/6+10,"circle");
arc(x/1.2,y/6,300,90,80);
outtextxy(x/1.2,y/6,"Arc");
line(x/30,10*y/15,x/6,10*y/15);
outtextxy(x/30+10,10*y/15+10,"Line");
ellipse(x/2,10*y/17,,360,100,50);
putpixel(x/2,10*y/17,0,360,100,50);
putpixel(x/2,10*y/17,WHITE);
outtextxy(x/2-textwidth("Ellipse")/2,10*y/17+10,"Ellipse");
drawpoly(6,array);
outtextxy(515,270,"polygon");
getch();
closegraph();
restoecrtmode();
}

