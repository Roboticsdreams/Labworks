#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gr;
int midx,midy;
clrscr();
printf("\t\t CIRCLE");
initgraph(&gd,&gr,"");
midx=getmaxx()/2;
midy=getmaxy()/2;
setcolor(YELLOW);
circle(midx,midy,100);
setcolor(YELLOW);
circle(midx,midy,50);
getch();
}