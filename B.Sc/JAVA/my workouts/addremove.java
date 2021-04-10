import java.io.*;
import java.lang.*;
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*<html code='addremove" width=500 height=500></html>*/
public class addremove extends Applet implements ActionListener
{
Label lbl=new Label("Enter the item");
TextField txt=new TextField(10);
List lst=new List();
Button add=new Button("add");
Button remove=new Button("remove");
Button removeall=new Button("removeall");
public void init()
{
add(lbl);
add(txt);
add(lst);
add(add);
add(remove);
add(removeall);
add.addActionListener(this);
remove.addAction Listener(this);
removeall.addActionListener(this);
}
public void actionPerformed(ActionEvent e)
[
lst.add(txt.getText());
txt.setText();
txt.requestFocus();
if(e.getSource()==remove)
{
lst=remove(lst.getSelectedIndex());
}
if(e.getSource()==removeall0
[
lst=removeall();
}
}
}