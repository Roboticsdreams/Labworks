import java.io.*;
import java.lang.*;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code="trafic" width=400 height=400>
</applet>*/
public class trafic extends Applet implements Runnable
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
}
}
catch(Exception e)
{
System.out.println(e.getMessage());
}
}
public void windowClosing(WindowEvent e)
{
System.exit(0);
}
public void paint(Graphics g)
{
Font f=new Font("Arail",Font.BOLD,38);
g.setFont(f);
g.setColor(Color.green);
g.drawString("Rathinam",100,100);
g.setColor(Color.red);

for(long i=0;i<100000;i++)
g.fillOval(100,100,50,50);
g.setColor(Color.yellow);
for(long i=0;i<100000;i++)
g.fillOval(100,200,50,50);
g.setColor(Color.green);
for(long i=0;i<100000;i++)
g.fillOval(100,300,50,50);
}
}


