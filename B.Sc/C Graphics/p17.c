#inlcude<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,maxy,style;
char s[20];
struct linesettingstype ls;
initgraph(&gd,&gm," ");
maxy=getmaxy();
stcolor(WHITE);
outtextxy(10,20,"NORMAL WIDTH");
x=20;
for(style=0;style<=4;style++)
{
setlinestyle(style,0,1);
if(style==0)
getlinesetting(&ls);
if(style==4)
{
setlinestyle(4,15,1);
line(x,50,x,maxy-50);
}
else
line(x,50,x,maxy-50);
itoa(style,sr,10);
outtextxy(x,maxy-20,str);
x=x+50;
}
outtextxy(375,20,"THICK WIDTH");
x=375;
for(style=0;style<=4;style++)
{
setlinestyle(style,0,3);
if(style==4)
{
setlinestyle(4,15,3);
line(x,50,x,maxy-50);
}
else
line(x,50,x,maxy-50);
itoa(style,sr,10);
outtextxy(x,maxy-20,str);
x=x+50;
}
setlinestyle(lslinestyle,ls.upattern,ls.thicknes);
getch();
closegraph();
restorecrtmode();
}
