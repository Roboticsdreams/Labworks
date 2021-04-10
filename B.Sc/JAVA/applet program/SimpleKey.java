import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code="SimpleKey" width=500 height=500>
</applet>
*/
public class SimpleKey extends Applet
implements KeyListener {
String message = "";
int X = 100, Y = 200; 
public void init() {
addKeyListener(this);
requestFocus(); 
}
public void keyPressed(KeyEvent ke) {
char c=ke.getKeyChar();
      switch(c)
      {
        case 'M':
        case 'm':
        {
            setBackground(new Color(255,0,128));
            message="Good Morning";
            break;
        }
        case 'A':
        case 'a':
        {
        setBackground(new Color(0,64,128));
        message="Good Afternoon";
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
}
public void keyReleased(KeyEvent ke) 
{
}
public void keyTyped(KeyEvent ke) 
{
}
public void paint(Graphics g) {
Font f=new Font("Arial",Font.BOLD,32);
g.setFont(f);
g.drawString(message, X, Y);
}
}
