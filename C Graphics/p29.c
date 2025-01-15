#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#define FLASH 0
#define TRUE 1

float xmin,xmax,ymin,ymax;

typedef struct code
{
unsigned int all:4;
unsigned int left:4;
unsigned int right:4;
unsigned int bottom:4;
unsigned int top:4;
}
code;

typedef struct vertex
{
float x,y;
}vertex;

void main()
{
int gd=DETECT,gm;
vertex strat[10],end[10];
void lineclip(vertex,vertex);
int i,n;
clrscr(;
initgraph(&gd,&gm," ");
cleardevice();
printf("\n\t LINE CLIPPING\n\n");
printf("\n\t window boundary point:");
scanf("%f %f %f %f",&xmin,&ymin,&xmax,&ymax);
printf("\n Enter the number of lines:");
scanf("%d",&n);
printf("\n\n Enter the end points:");
for(i=0;i<n;i++)
{
printf("\n\n p %d:\n",i+1);
scanf("%f %f %f %f",&start[i].x,&start[i].y,&end[i].x,&end[i].y);
}
cleardevice();
rectangle(xmin,ymin,xmax,ymax);
getch();

for(i=0;i<n;i++)
line(start[i].x,start[i].y,end[i].x,end[i].y);
getch();

rectangle(xmin,ymin,xmax,ymax);
for(i=0;i<n;i++)
line(start[i].x,xtart[i].y,end[i].x,end[i].y);

outtextxy(200,40,"LINE CLIPPING");
setlinestyle(SOLID_LINE,2,THICK_WITDH);
line(40,460,70,460);
outtextxy(77,460,"After clipping");
for(i=0;i<n;i++)
lineclip(start[i],end[i]);
}

void lineclip(vertex f,vertex s)
{
float x,y;
char accept,done;
code rc1,rc2,rc;
code region_code(vertex);
accept=FALSE;
done=FALSE;
rc1=region_code(f);
rc2=region_code(s);

if((rc1.all==0)&(rc2.all)==0)
{
accept=TRUE;
}
else
{
do
{
if((rc1.all==0)|(rc2.all==0))
{
done=TRUE;
accept=TRUE;
}
if((rc1.all&rc2.all)!=0)
done=TRUE;
else
{
if(rc1.all!=0)
rc=rc1;
else
rc=r2;
if(rc.left)
{
y=f.y+(s.y-f.y)*(xmin-f.x)/(s.x-f.x);
x=xmin;
}
else if(rc.right)
{
y=f.y+(s.y-f.x)*(xmax-f.x)/(s.x-f.x);
x=xmax;
}
else if(rc.bottom)
{
x=f.x+(s.x-f.x)*(ymin-f.y)/(s.y-f.y);
y=ymin;
}
else if(rc.top)
{
x=f.x+(s.x-f.x)*(ymax-f.y)/(s.y-f.y);
y=ymax;
}
if(rc1.all==rc.all)
{
f.x=x;
f.y=y;
rc1=region_code(f);
}
else
{
s.x=x;
s.y=y;
rc2=region_code(s);
}
}
}while(!done);
}
setlinestyle(SOLID_LINE,2,THICk_WIDTH);
if(accept)
line(f.x,f.y,s.x,s.y);
getch();
}

code region_codee(vertex s)
{
code rcode;
rcode.all=0;
rcode.left=0;
rcode.right=0;
rcode.bottom=0;
rcode.top=0;

if(s.x<xmin)
{
rcode.left=1;
rcode.all=rcode.all+rcode.left;
}

if(s.x>xmax)
{
rcode.right=2;
rccode.all=rcode.all+rcode.right;
}

if(s.y>y.max)
{
rcode.top=3;
rcode.all=rcode.all+rcode.top;
}

if(s.y<ymin)
{
rode.bottom=4;
rcode.all=rcode.all+rcode.bottom;
}
return(rcode);
}





