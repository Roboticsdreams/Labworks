import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/*<applet code="shape" width=500 heigth=600>
</applet>*/

public class shape extends Frame
{
shape()
{
addWindowListener(new WH());
}
class WH extends WindowAdapter
{

public void Windowclosing(WindowEvent e)
{
System.exit(0);
}
}
public void paint(Graphics g)
{
for(int i=0;i<100;i+=10)
{
g.setColor(Color.green);
g.drawLine(0,i,100,i);
g.setColor(Color.red);
g.drawLine(i,0,i,100);
g.setColor(Color.blue);
g.drawRect(105,400,60,60);
g.setColor(Color.black);
g.fillRoundRect(100,100,180,40,15,15);
g.setColor(Color.red);
g.fillRect(100,150,60,60);
g.setColor(Color.green);
g.drawOval(200,250,60,60);
}
}
public static void main(String args[])
{
shape s;
s=new shape();
s.setBounds(1,1,400,400);
s.setVisible(true);
}
}