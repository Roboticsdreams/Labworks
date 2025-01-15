/* Bresenham's Line Algorithm*/

#include<stdio.h>
#include<conio.h>
#inccludde<graphics.h>

void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,xend,inc1,inc2,d,dx,dy,x,y;
initgraph(&gd,&gm," ");
printf("Enter the x1 and y1 values:");
scanf("%d %d",&x1,&y1);
printf("Enter the x2 and y2 values:");
scanf("%d %d",&x2,&y2);
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
xx=x1;
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
els
e{
d=d+inc2;
y=y+1;
}
x=x+1;
}
getch();
}

