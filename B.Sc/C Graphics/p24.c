/*circle Algorithm*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{

int i,j,x,y,r,p,a;
int x1,y1;
int gd=DETECT,gm;

printf("\nEnter the co-ordinates of center and radius of circle:");
scanf("%d %d %d",&x,&y,&r);
initgraph(&gd,&gm," ");
x1=0;
y1=r;
p=3-2*r;
while(x1<y1)
{
plotcircle(x,y,x1,y1);
if(p<0)
p=p+4*(x1-y1)+6;
else
{
p=p+4*(x1-y1)+10;
y1=y1-1;
}
x1=x1+1;
}
if(c1==y1)
plotcircle(x,y,x1,y1);
getch();
closegraph();
restorecrtmode();
}

plotcircle(int x,int y,int x1,int y1)
{
putpixel(x+x1,y+y1,15);
putpixel(x-x1,y+y1,15);
putpixel(x+x1,y-y1,15);
putpixel(x-x1,y-y1,15);
putpixel(x+y1,y+x1,15);
putpixel(x-y1,y+x1,15);
putpixel(x+y1,y-x1,15);
putpixel(x-y1,y-x1,15);
}
