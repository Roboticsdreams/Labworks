//WRITE A JAVA PROGRAM FOR DISPLAY A MESSAGE USING APPLET
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/* <applet code="display" width=200 height=200></applet>*/
public class display extends Applet implements MouseListener
{
  Point p;
  public void init()
  {
    addMouseListener(this);
  }
  public void mouseClicked(MouseEvent e)
  {
    p=e.getPoint();
    repaint();
  }
  public void mouseEntered(MouseEvent e)
  {
    repaint();
  }
  public void mouseExited(MouseEvent e)
  {

  repaint();
  }
  public void mousePressed(MouseEvent e)
  {
  repaint();
  }
  public void mouseReleased(MouseEvent e)
  {
    repaint();
  }
  public void paint(Graphics g)
  {
    //g.setBackground(Color.red);
    g.setColor(Color.pink);
    g.drawString("HELLO",p.x,p.y);
  }
    
 }


