#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int i,j,x,y,t;
char ch[20][20]={"BALCK","DARKBLUE","GREEN","CYAN","RED","MEGANTA","BROWN","LIGHTGRAY","GRAY","BLUE","LIGHTGREEN","SKYBLUE","ORANGE","PINK","YELLOW"};
initgraph(&gd,&gm," ");
y=100;
t=0;
for(i=0;i<3;i++)
{
x=70;
for(j=0;j<5;j++)
{
circle(x,y,30);
setfillstyle(SOLID_FILL,t);
floodfill(x+1,y+1,WHITE);
outtextxy(x-30,y+40,ch[t]);
x=x+120;
t++;
}
y=y+130;
}
getch();
closegraph();
}
