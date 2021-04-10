import java.io.*;
import java.lang.*;
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*<applet code="ruled" width=500 height=500></applet>*/
public class ruled extends Frame
{
ruled()
{
add.windowListener(new WH());
}
class WH extends WindowAdapter
{
public WH extends  WindowAdapter
{
public void windowClosing(WindowEvent e)
{
System.exit(0);
}
}
public void  paint(Graphics g)
{
for(int i=0;i<100;i+=10)
{
g.drawLine(0,i,100,i);
g,drawLine(i,0,100);
g.setColor(new Color(128,0,0));
g.drawRect(105,400,60,60);
g.fillRoundRect(100,100,180,40,15,15);
g.fillRect(100,150,60,60);
g.drawOval(200,250,60,60);
}
}
public Static void main(String args[])
{
ruled r;
r=new ruled();
r.setBounds(1,1,400,400);
r.setVisible(true);
}
}