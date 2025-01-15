 #include<graphics.h>
 #include<math.h>
 #define rods 0.0714
 int x=280,y=250,numbranch=3,steps=7;
 float spreadradio=0.8,lenradio=0.85;
 main()
 {
 int gd=DETECT,gm;
 int drawtree(int x,int sy,float a,float l,float f,int n);
 initgraph(&gd,&gm,"");
 drawtree(x,y,330,50,550,steps);
 getch();
 closegraph();
 }
 drawtree(int x,int y,float a,float l,float f,int n)
 {
 int i,num,x2,y2;
 float delang,ang;
 if(n>0)
 {
 x2=x+l*cos(rods*a);
 y2=y+l*sin(rods*a);
 switch(n)
 {
 case 1:
 setcolor(LIGHTGREEN);
 delay(1000);
 break;
 case 2:
 setcolor(GREEN);
 break;
 default:
 setcolor(BROWN);
 break;
 }
 line(x,y,x2,y2);
 if(n==steps)
 {
 setfillstyle(5,BROWN);
 bar(x-5,y+50,x+2,y2);
 }
  num=numbranch;
 delang=7/(num-1.0);
 ang=a-(7/1.0)-delang;
 for(i=0;i<=num;i++)
 {
 ang+=delang;
 drawtree(x2,y2,ang,l*lenradio,f*spreadradio,n-1);
 }
 }
 else
 {
 setcolor(RED);
 ellipse(x2,y2,0.270,540,2,4);
 }
}


