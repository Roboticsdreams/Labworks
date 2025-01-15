#include<graphics.h>
main()
{
int gd=DETECT,gm;
int a[]={100,100,150,50,200,50,250,100,250,200,175,250,100,200,100,100};
int b[]={450,150,500,100,550,150,550,200,450,150};
int c[]={300,300,350,250,400,250,450,300,450,350,400,400,350,400,300,350,300,300};
clrscr();
initgraph(&gd,&gm," ");
setbkcolor(GREEN);
setcolor(RED);
drawpoly(8,a);
outtextxy(150,130,"SPECTAGON");
drawpoly(6,b);
outtextxy(470,150,"PENTAGON");
drawpoly(9,c);
outtextxy(350,330,"OCTAGON");
getch();
closegraph();
}

