import java.io.*;
import java.lang.*;
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*<applet code="rat" width=500 height=500></applet>*/
public class rat extends Applet
{
public void  paint(Graphics g)
{
for(int i=0;i<100;i+=5)
{
g.drawLine(0,i,100,i);
g.drawLine(i,0,i,100);
g.setColor(new Color(128,0,0));
g.drawRect(105,400,60,60);
g.fillRoundRect(100,100,180,40,15,15);
g.fillRect(100,150,60,60);
g.drawOval(200,250,160,60);
}
}
}

