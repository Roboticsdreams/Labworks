/* REFLS */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int a[3][3],p[3][2],i,j,n;
float m[3][3];

void fun1();
void fun2();
void fun3();
void fun4();
void fun5();

void f1();
void axis();
void trans();
void makeidentity();

void main()
{
int gd=DETECT,gm;
int choice;
initgraph(&gd,&gm," ");

printf("\n\t Reflection");
printf("\nEnter the co-ordinate values:");
for(i=0;i<n3;i++)
{
printf("\n\t pint %d:",i+1);
scanf("%d %d",&a[i][0],&a[i][1]);
a[i][2]=1;
p[i][0]=a[i][0]+300;
p[i][1]=240-a[i][1];
}

clrscr();
cleardevice();
printf("\n Menu for refelction");
printf("\n1.About x-axis");
printf("\n2.About y-axis");
printf("\n3.About origin");
printf("\n4.About y=x");
printf("\n5.About y=-x");
printf("\n\nchoice for shearing");
scanf("%d",&choice);
n=3;

cleardevice();
setfillstyle(CLOSE_DOT_FILL,WHITE);
axis();
f1();

switch(choice)
{
case 1:
fn1();
outtextxy(10,20,"refection Based on x-axis");
break;

case 2:
fn2();
outtextxy(10,20,"refection Based on y-axis");
break;

case 3:
fn3();
outtextxy(10,20,"refection Based on origin");
break;

case 4:
fn4();
outtextxy(10,20,"refection Based on y=x");
break;

case 5:
fn5();
outtextxy(10,20,"refection Based on y=-x");
break;
}
setfillstyle(SLASH_FILL,WHITE);
f1();
outtextxy(50,390,"Length");
outtextxy(20,410,".....origin");
outtextxy(20,430,"-----Transformed");
f1();
getch();
closegraph();
}

void fn1()
{
makeidentity(m);
m[1][1]=-1;
trans(a,m,n);
}

void fn2()
{
makeidentity(m);
m[0][0]=-1;
trans(a,m,n);
}

void fn3()
{
makeidentity(m);
m[1][1]=-1;
m[0][0]=-1;
trans(a,m,n);
}

void fn4()
{
makeidentity(m);
m[0][0]=0;
m[0][1]=1;
m[1][0]=1;
m[1][1]=0;
trans(a,m,n);
}

void fn5()
{
makeidentity(m);
m[0][0]=0;
m[0][1]=-1;
m[1][0]=-1;
m[1][1]=0;
trans(a,m,n);
}

void makeidentity(float m[3][3])
{
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
if(i==j)
m[i][j]=1;
else
m[i][j]=0;
}
}

void axis()
{
cleardevice();
line(10,240,600,240);
line(300,5,300,460);
outtextxy(293,3,"^y");
outtextxy(7,237,"<");
outtextxy(5,250,"-x");
outtextxy(600,240,">");
outtextxy(606,240,"x");
outtextxy(297,455,"V-y");
outtextxy(252,250,"(0,0)");
}

void f1()
{
for(i=0;i<3;i++)
{
p[i][0]=a[i][0]+300;
p[i][1]=240-a[i][1];
}
fillpoly(3,p[0]);
getch();
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






