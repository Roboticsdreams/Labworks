
#include<graphics.h>
void plane(int x,int y)
{
setcolor(BLUE);
outtextxy(520,42,"MOON");
setcolor(RED);
line(x,y,x+10,y-3);
line(x+10,y-3,x+25,y-2);
line(x+25,y-2,x+25,y-2);
line(x+25,y-3,x,y);
line(x+1,y+1,x+25,y-1);
}
void main()
{
int gd=DETECT,gm,maxx,px=1,py;
initgraph(&gd,&gm," ");
maxx=getmaxx();
px=maxx;
py=40;
setcolor(4);
while(!kbhit())
{
delay(100000);
cleardevice();
setbkcolor(BLACK);
fillellipse(maxx-100,60,60,66);
px=px-15;
if(px+30<0)
px=maxx;
plane(px,py);
plane(px,py);
plane(px+30,py+90);
plane(px+70,py+50);
}
getch();
}
