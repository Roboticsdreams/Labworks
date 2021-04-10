import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*<applet code="circle" width=400 height=400></applet>*/

public class circle extends Applet implements ActionListener
{

Button rectangle=new Button("Rectangle");
Button circle=new Button("circle");
Button clear=new Button("clear");
Button red=new Button("red");
Button blue=new Button("blue");
Button green=new Button("green");
int d,s,x,y;
public void init()
{
add(rectangle);
add(circle);
add(clear);
add(red);
add(blue);
add(green);

rectangle.addActionListener(this);
circle.addActionListener(this);
clear.addActionListener(this);
red.addActionListener(this);
blue.addActionListener(this);
green.addActionListener(this);
}

public void actionPerformed(ActionEvent e)
{

requestFocus();

if(e.getSource()==rectangle)
{
d=1;
repaint();
}

if(e.getSource()==circle)
{
d=2;
repaint();
}

if(e.getSource()==clear)
{
d=3;
repaint();
}




if(e.getSource()==red)
{
s=1;
repaint();
}

if(e.getSource()==blue)
{
s=2;
repaint();
}

if(e.getSource()==green)
{
s=3;
repaint();
}

}



public void paint(Graphics g)
{



if(d==1)
{
g.fillRect(100,100,200,100);
x=1;
y=0;
}

if(d==2)
{
g.setColor(Color.black);
g.fillOval(100,100,200,100);
y=1;
}

if(d==3)
{
g.setColor(Color.white);
g.fillRect(100,100,200,100);
x=0;
y=0;
}

if(s==1)
g.setColor(Color.red);
if(s==2)
g.setColor(Color.blue);
if(s==3)
g.setColor(Color.green);



if(x==0 && y==1)
{
g.fillOval(100,100,200,100);
}
if(x==1 && y==0)
{
g.fillRect(100,100,200,100);
}
if(x==1 && y==1)
{
g.fillRect(100,100,200,100);
g.setColor(Color.green);
g.fillOval(100,100,200,100);
}

}
}