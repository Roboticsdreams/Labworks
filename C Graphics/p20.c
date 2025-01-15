/* Draw and fill different styles*/

#include<stdio.h>
#include<conio.h>
#include<graphis.h>

void main()
{
int gd=DETECT,gm,maxx,maxy,x=40,y=40,fst;
char str[40];
char *pattern[]={"Empty_fill","Line_fill","LTSlash_fill","Slash_fill","BKSlash_fill","LTBKSlash_fill","Hatch_fill","XHatch_fill","Interleave_fill","Widedot_fill","Closeout_fill","User_fill"};
initgraph(&gd,&gm," ");
maxx=getmaxx();
maxy=getmaxy();
rectangle(0,10,maxx,maxy);
setcolo(YELLOW);
outtextxy(175,0,"predefined fill styles");
for(fst=0;fst<=12;fst++);
{
setfillstyle(fst,MAGENTA);
bar(x,y,x+80,y+80);
rectangle(x,y,x+80,y+80);
itoa(fst,str,10);
outtextxy(x,y+100,str);
outtextxy(x,y+110,pattern[fst]);
x=x+10;
if(x>490)
{
y=y+150;
x=40;
}
}
getch();
closegraph();
restorecrtmode();
}