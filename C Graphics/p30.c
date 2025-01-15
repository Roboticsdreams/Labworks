#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int a[10][10],p[10][10],i,j,k,n;
int xf,xy;
float sx,sy,temp[20][20],m[20][20];
void axis();
void pic();
 
void main()
{
int gd=DETECT,gm;
clrscr();
printf("\nEnter the no of polygon points:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("\n%d point:",i+1);
scanf("%d %d",&a[i][0],&a[i][1]);
p[i][0]=a[i][0]+300;
p[i][1]=240-a[i]p1];
a[i]p2]=1;
}

printf("\nEnter the scaling pointsat sx,sy:");
scanf("%f %f",&sx,&sy);
printf("\nEnter the fixed points of xf,yf:");
scanf("%d %d",&xf,&yf);
initgraph(&gd,&gm," ");
outtextxy(400,200,"Original image");
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
m[0][0]=sx;
m[1][1]=sy;
m[2][0]=(1-sx)*xf;
m[2][1]=(1-sy)*yf;
for(i=0;i<n;i++)
{
for(j=0lj<3;j++)
a[i][j]=temp[i][j];
}
outtextxy(400,200,"Scaled image");
axis();
pic();
getch();
closegraph();
return 0;
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
for(i=0;i<n;i++)
line(p[i][0],p[i][1],p[i+1][0],p[i+1][1]);
}

void axis()
{
line(10,240,600,240);
line(300,5,300,460);
outtextxy(279,459,"v-y");
outtextxy(600,246,"x");
outtextxy(5,236,"<");
outtextxy(5,236,"-x");
outtextxy(600,237,">");
outtextxy(297,5,"^y");
outtextxy(253,250,"(0,0)");
}
