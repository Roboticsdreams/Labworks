#include<stdio.h>
#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm;
int midx,midy,i;
initgraph(&gd,&gm,"");
printf("\n\t BOX");
midx=getmaxx()/2;
midy=getmaxy()/2;
for(i=EMPTY_FILL;i<USER_FILL;i++)
{
setfillstyle(i,getmaxcolor());
bar3d(midx-50,midy-50,midx+50,midy+50,10,1);
getch();
}
}