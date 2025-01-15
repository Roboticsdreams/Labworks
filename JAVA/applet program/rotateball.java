//ROTATE A BALL APPLET PROGRAM
import java.awt.*;
import java.applet.*;
/*<applet code="rotateball" width=400 height=400></applet>*/
public class rotateball extends Applet implements Runnable
{
  Thread t;
  int c,x=10,y=10;
  Dimension d;
  boolean valueSet=true;
  public void init()
  {
    t=new Thread(this);
    t.start();
  }
  public void run()
  {
    try
      {
        while(true)
        {
          repaint();
          Thread.sleep(50);
          switch(c)
          {
            case 1:
              x=x+5;
              y=10;
              break;
            case 2:
              x=450;
              y=y+5;
              break;
            case 3:
              x=x-5;
              y=y-5;
              break;
            case 4:
              x=10;
              y=y-5;
              break;
          }
       }

      }
      catch(Exception e)
      {
      }
  }
  public void paint(Graphics g)
  {
    g.setColor(Color.red);
    if(valueSet)
    {
      g.fillOval(x,y,50,50);
      if((x==10)&&(y==10))
      {
      c=1;
      }
      if((x==450)&&(y==10))
      c=2;
      if((x==450)&&(y==450))
      c=3;
      if((x==10)&&(y==250))
      c=4;
    }
  }
  }

