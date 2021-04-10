#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int a[3][3],p[3][3]b[4][4],q[4][4],i,j,n;
float m[3][3];
void fn1();
void fn2();
void trans();
void axis();
void makeidentity();
void f1();

void main()
{
int gm,gd=DETECT,n;
int choice;
clrscr();
initgraph(&gd,&gm," ");
printf("\nEnter the point:");
scanf("%d",&n);
printf("\n\t Shearing");
printf("\Ener the co-ordinate values:");
for(i=0;i<4;i++)
{
printf("\n\tPoint  %d:",i+!);
scanf("%d %d",&b[i][0],&b[i][1]);
q[i]p0]=b[i][0];
q[i][1]=b[i][1];
}
n=4;
cleardevice();
printf("\nMenu for shearing:");
printf("\n1.X-Direction");
printf("\n2.Y-Direction");
printf("\nEnter ur choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
fn1();
break;

case 2:
fn2();
break;
}
setfillstyle(SLASH_FILL,WHITE);
axis();
outtextxy(10,20,"AFTER SHEARING");
f1();
getch();
closegraph();
}

void fn1()
{
float shx;
printf("\nenter the shx value:");
scanf("%f",&shx);
cleardevice();
setfillstyle(SLASH_FILL,WHITE);
axis();
outttextxy(10,20,"BEFORE SHEARING");
f1();
makeidentity();
m[1][0]=shx;
trans(b,m,n);
}

void fn2()
{
float shy;
printf("\nEnter the shy values:");
scanf("%f",&shy);
cleardevice();
setfillstyle(SLASH_FILL,WHITE);
axis();
outttextxy(10,20,"BEFORE SHEARING");
f1();
makeidentity();
m[0][1]=shy;
trans(b,m,n);
}

void makeidentity(float m[3][3])
{
int i,j;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
if(i==j)
m[i][j]=1;
else
m[i][j]=0;
}
}

void trans(int a[3][3],float m[3][3],int n)
{
int k;
float temp[4][3];

for(i=0;i<n;i++)
{
for(j=0;j<3;j++)
{
temp[i][j]=0.0;
for(k=0;k<3;k++)
temp[i][j]+=a[i][k]*m[k][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<3;j++)
a[i][j]=temp[i][j];
}
}

void axis()
{
cleardevice();
line(10,240,600,240);
line(300,5,300,460);
outtextxy(296,3,"^y");
outtextxy(7,237,"<");
outtextxy(5,250,"-x");
outtextxy(600,240,">");
outtextxy(606,240,"x");
outtextxy(297,455,"V-y");
outtextxy(252,250,"(0,0)");
}

void f1()
{
for(i=0;i<4;i++)
{
q[i][0]=b[i][0]+300;
q[i][1]=240-b[i][1];
fillpoly(4,q[0]);
getch();
}
}


