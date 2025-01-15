import java.io.*;
import java.awt.*;
import java.lang.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="test" width=200 height=200></applet>*/
public class test extends Applet implements Mouselistener
{
Point p;
public void init()
{
add Mouselistener(this);
}
public void mouseClicked(MouseEvent e)
{
p=e.getPoint();
repaint();
}
public void mouseExited(MouseEvent e)
{
p=e.getPoint();
repaint();
}
public void mousePressed(MouseEvent e)
{
p=e.getPoint();
repaint();
}
public void ouseReleased(MouseEvent e)
{
p=e.getPoint();
repaint();
}
public void paint(Graphics g)
{
Font f=new Font("Arail",Font.BOLD,38);
g.setFont(f);
g.setColor(Color.green);
g.drawString("Rathinam",p.x,p.y);
}
}