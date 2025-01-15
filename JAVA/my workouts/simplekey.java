import java.io.*;
import java.lang.*;
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*<applet code="simplekey" width=500 height=500>
</applet>*/
public class simplekey extends Applet implements keyListener
{
String message="";
int x=100,y=200;

public void init()
{
add keyListener(this);
request Focus();
}

public void keyPressed(keyEvent ke)
{
char c=ke.getKeychar();
switch(c)
{
case 'M':
case 'm':
{
setBackground(new Color(255,0,128));
message="Good Morning";
break;
}
case 'E':
case 'e':
{
setBackground(new Color(0,128,243));
message="Good Evening";
break;
}
case 'N':
case 'n':
{
setBackground(new Color(255,255,128));
message="Good Night";
break;
}
}

public void keyReleased(keyEvent ke)
{
}

public void keyTyped(keyEvent ke)
{
}

public void paint(Graphics g)
{
Font f=new Font("Arial",Font.BOLD,32)
g.setFont(f);
g.drawString(Message,x,y);
}

}

