#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int x1,x2,y1,y2,dx,dy,i;
float step,xinc,yinc,x,y;
char a[20],b[20],c[20],d[20];
clrscr();
printf("DDA ALOGRITHM");
printf("\n************\n");
printf("Enter the starting point\n");
scanf("%d%d",&x1,&y1);
printf("Enter the ending point\n");
scanf("%d%d",&x2,&y2);
sprintf(c,"%c%c",'^','y');
sprintf(d,"%c%c",'>','x');
initgraph(&gd,&gm," ");
line(40,0,40,460);
line(20,400,600,400);
sprintf(a,"%c%d%c%d%c",'(',x1,',',y1,')');
sprintf(b,"%c%d%c%d%c",'(',x2,',',y2,')');
outtextxy(17,0,c);
outtextxy(610,397,d);
outtextxy(x1+20,455-y1,a);
outtextxy(x2+20,455-y2,b);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
{
step=abs(dx);
}
else
{
step=abs(dy);
xinc=dx/step;
yinc=dy/step;
x=x1;
y=y1;
}
for(i=1;i<=step;i++)
{
putpixel(x,435-y,GREEN);
x=x+xinc;
y=y+yinc;
}
getch();
closegraph();
}

