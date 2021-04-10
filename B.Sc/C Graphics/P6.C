#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,maxy,style,x;
char str[40];
struct linesettingstype IS;
initgraph(&gd,&gm,"  ");
maxy=getmaxy();
setcolor(6);
outtextxy(10,20,"Normal width");
x=20;
for(style=0;style<=4;style++)
{
setlinestyle(style,0,1);
if(style==0)
setlinestyle(style,0,2);
if(style==4)
{
setlinestyle(4,15,1);
line(x,50,x,maxy-50);
}
else
line(x,50,x,maxy-50);
itoa(style,str,10);
outtextxy(x,maxy-20,str);
x=x+50;
}
outtextxy(375,20,"Thick width");
x=375;
for(style=0;style<=4;style++)
{
setlinestyle(style,0,3);
if(style==4)
{
setlinestyle(4,15,3);
line(x,50,x,maxy-50);
}
else
line(x,50,x,maxy-50);
itoa(style,str,10);
outtextxy(x,maxy-20,str);
x=x+50;
}
setlinestyle(IS.linestyle,IS.upattern,IS.thickness);
getch();
closegraph();
restorecrtmode();
}

