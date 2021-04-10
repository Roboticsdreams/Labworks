#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=0,gm;
int i,mx,my,poly[8];
initgraph(&gd,&gm,"");
mx=getmaxx();
printf("\t POLYGON FILLING\n");
printf("Enter the value:");
scanf("%d",&mx);
my=getmaxy();
poly[0]=20;
poly[1]=my/2;
poly[2]=mx-20;
poly[3]=20;
poly[4]=mx-50;
poly[5]=my-20;
poly[6]=mx/2;
poly[7]=my/2;
for(i=EMPTY_FILL;i<USER_FILL;i++)
{
setcolor(RED);
setfillstyle(i,250);
fillpoly(4,poly);
getch();
}
closegraph();
}

