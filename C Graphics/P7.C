#include<stdio.h>
#include<graphics.h>
#include<conio.h>
char *horizontal[]={"LEFT_TEXT","CENTER_TEXT","RIGHT_TEXT"};
void cross(int x,int y);
char *vertical[]={"BOTTOM_TEXT","CENTER_TEXT","TOP_TEXT"};
main()
{
int gd=DETECT,gm,midx,midy,i,j;
char msg[80]="GOOD MORNING";
char msg1[80],msg2[80];
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
settextjustify(LEFT_TEXT,TOP_TEXT);
outtextxy(100,350,"HORIZONTAL JUSTIFY");
sprintf(msg1,"%s",horizontal[i]);
outtextxy(320,350,msg1);
outtextxy(100,400,"VERTICAL JUSTIFCATION");
sprintf(msg2,"%s",vertical[j]);
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
}