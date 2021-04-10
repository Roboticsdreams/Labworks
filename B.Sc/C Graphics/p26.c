#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int i,j,a[10][10],k,n,p[20][20];
float xr,yr;
float temp[20][20],m[20][20],teta,c,r,s;

void axis();
void pic();

void main()
{

int gd=DETECT,gm;
clrscr();
printf("\nEnter the no of polygon points");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n\tpoint:%d",i+1);
scanf("%d %d",&a[i][[0],&a[i][1]);

p[i][0]=a[i][0]+300;
p[i][1]=240-a[i][1];
a[i][2]=1;
}

printf("\nEnter the fixed points sx,sy");
scanf("%f %f",&xr,&yr);
printf("\nEnter the teta value:");
scanf("%f",&teta);
r=(3.14/180)*teta;
initgraph(&gd,&gm," ");
outtextxy(400,200,"original figure");
axis();
pic();
getch();

cleardevice();
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
m[i][j]=1;
else
m[i][j]=0;
}
}

c=cos(r);
s=sin(r);

m[0][0]=c;
m[0][1]=s;
m[1][1]=c;
m[1][0]=-s;
m[2][2]=1.0;
m[2][0]=(1-c)*xr+yr*s;
m[2][1]=(1-c)*yr-xr*s;

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
temp[i][j]=0.0;
for(k=0;k<=n;k++)
temp[i][j]+=a[i][k]*m[k][j];
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
a[i][j]=temp[i][j];
}

outtextxy(420,200,"Rotated figure");
axis();
pic();
getch();
closegraph();
}


void pic()
{
for(i=0;i<n;i++)
{
p[i][0]=a[i][0]+300;
p[i][1]=240-a[i][1];
}
p[n][0]=p[0][0];
p[n][1]=p[0][1];
setlinestyle(0,5,THICK_WITDH);
for(i=0;i<n;i++)
line(p[i][0],p[i][1],p[i+1][0],p[i+1][1]);
}

void axis()
{
setlinestyle(0,0,0);
line(20,240,600,240);
line(300,5,300,460);
outtextxy(297,459,"V-y");
outtextxy(600,240,"x");
outtextxy(5,236,"<");
outtextxy(5,246,"-x");
outtextxy(297,5,"^y");
outtextxy(253,250,"(0,0)");
}
