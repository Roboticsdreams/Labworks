/*JUST TEXT*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

void cross(int x,int y);
char *horizontal[]={"RIGHT_TEXT","CENTER_TEXT","LEFT_TEXT"};
char *vertical[]={"TTOP_TEXT","CENTER_TEXT","BOTTOM_TEXT"};

void main()
{
int gd=DETECT,gm;
int midx,midy,i,j;
char msg1[80],msg2[80];
char msg[80]="Hello Good Morning";
initgraph(&gd,&gm," ");
midx=getmaxx()/2;
midy=getmaxy()/2;

for(i=LEFT_TEXT;i<=RIGHT_TEXT;i++)
{

for(j=BOTTOM_TEXT;j<=TOP_TEXT;j++)
{

cleardevice();
cross(midx,midy);
settextjustify(i,j);
outtextxy(midx,midy,msg);
setextjustify(LEFT_TEXT,TOP_TEXT);
outtextxy(100,350,"horizontal justification");
sprintf(msg1,"%s",horizontal[i]);
outtextxy(320,350,msg1);
outtextxy(120,400,"vertical justification");
sprintf(msg2,"%s",vertical[i]);
outtextxy(320,400,msg2);
getch();
}
}
closegraph();
restorecrtmode();
}
void cross(int x,int y)
{
line(x-20,y,x+20,y);
line(x,y-20,x,y+20);
}


