//DISPLAY MESSAGE

import java.awt.*;
import java.applet.*;
import java.awt.event.*;

/*<applet code="message" width=400 height=400></applet>*/

public class message extends Applet implements MouseListener
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
   public void mouseEntered(MouseEvent e)
   {
   repaint();
   }
   public void paint(Graphics g)
   {
   Font f=new Font("Monotype corsiva",Font.ITALIC,50);
   g.setFont(f);
   setBackground(Color.black);
   g.setColor(Color.red);
   g.drawString("Deepa I Love You",p.x,p.y);
   }
}
