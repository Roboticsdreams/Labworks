#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"");
setbkcolor(BLACK);
setcolor(WHITE);
rectangle(50,50,450,450);
settextstyle(1,0,2);
setcolor(GREEN);
outtextxy(180,25,"CHESS BOARD");
for(i=50;i<400;i+=100)
{
for(j=50;j<400;j+=100)
{
bar(i,j,i+50,j+50);
bar(i+50,j+50,i+100,j+100);
settextstyle(0,0,80);
outtextxy(i,j,"");
}
}
getch();
closegraph();
}
