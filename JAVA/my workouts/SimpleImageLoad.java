/*
* <applet code="SimpleImageLoad" width=248 height=146>
* <param name="img" value="Sunset.jpg">
* </applet>
*/
import java.awt.*;
import java.applet.*;
public class SimpleImageLoad extends Applet
{
Image art;
public void init() {
art = getImage(getDocumentBase(), getParameter("img"));
}
public void paint(Graphics g) {
g.drawImage(art, 0, 0, this);
}
}