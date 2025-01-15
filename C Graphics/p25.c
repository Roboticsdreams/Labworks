/* 2d translate*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int i,j,k,a[10][10],p[20][20],n,tx,ty;
float temp[20][20],m[20][20];
void aixs();
void pic();

void main()
{
int gd=DETECT,gm;
clrscr();
printf("\nEnter the no of polygon points:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n\tpoints%d:",i+1);
scanf("%d %d",&a[i][0],&a[i][1]);
p[i][0]=a[i][0]+300;
p[i][1]=240-a[i][1];
a[i][2]=1;
}

printf("\nEnter the translation point tx,ty:");
scanf("%d %d",&tx,&ty);
initgraph(&gd,&gm," ");
outtextxy(400,200,"ORIGINAL IMAGE");
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

m[2][0]=tx;
m[2][1]=ty;

for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
temp[i][j]=0.0;
for(k=0;k<=n;k++)
temp[i][j]+=a[i]pk]*m[k][j]l
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
a[i][j]=temp[i][j];
}

outtextxy(400,200,"TRANSLATED IMAGE");
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
p[i]p1]=240-a[i][1];
}
p[n][0]=p[0][0];
p[n][1]=p[0][1];

for(i=0;i<n;i++)
{
line(p[i][0],p[i][1],p[i+1][0],p[i+1][1]);
}
}


void axis()
{
line(10,240,600,240);
line(300,5,300,460);
outtextxy(297,495,"V-y");
outtextxy(600,246,"x");
outtextxy(5,236,"<");
outtextxy(5,246,"-x");
outtextxy(600,237,">");
outtextxy(297,5,"^y");
outtextxy(253,250,"(0,0)");
}

