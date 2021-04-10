import java.io.*;
import java.lang.*;
import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*<applet code="traffic" width=400 height=400>
</applet>*/
public class traffic extends Applet implements Runnable
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
}
}
}
catch(Exception e)
{
System.out.println(e.getMessage());
}
}

public void paint(Graphics g)
{
if(valueSet)
{
if((x==10)&&(y==10))
{
g.setColor(Color.red);
g.fillOval(100,100,50,50);
c=1;
}
if((x==450)&&(y==10))
{
g.setColor(Color.yellow);
g.fillOval(100,100,50,50);
c=2;
}
if((x==450)&&(y==450))
{
g.setColor(Color.green);
g.fillOval(100,100,50,50);
c=3;
}
if((x==10)&&(y==250))
{
g.setColor(Color.red);
g.fillOval(100,100,50,50);
c=4;
}
}
}
}