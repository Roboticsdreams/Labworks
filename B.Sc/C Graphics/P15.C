#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x,y,xend,d,inc1,inc2,dx,dy;
initgraph(&gd,&gm," ");
printf("Enter x1,y1 value");
scanf("%d%d",&x1,&y1);
printf("Enter the x2,y2 value");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
inc1=2*dy;
inc2=2*(dy-dx);
d=inc1-dx;
if(dx<0)
{
x=x2;
y=y2;
xend=x1;
}
else
{
x=x1;
y=y1;
xend=x2;
}
while(x<xend)
{
putpixel(x,y,RED);
if(d<0)
{
d=d+inc1;
}
else
{
d=d+inc2;
y=y+1;
}
x=x+1;
}
getch();
}
