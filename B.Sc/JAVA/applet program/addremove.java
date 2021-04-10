// ADD REMOVE ITEMS USING LISTBOX
import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="addremove" width=600 height=400>
  </applet>*/
public class addremove extends Applet implements ActionListener
  {
    Label lbl=new Label("ENTER THE ITEM:");
    TextField txt=new TextField(10);
    List lst=new List();
    Button add =new Button("add");
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
      remove.addActionListener(this);
      removeall.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e)
    {
      lst.add(txt.getText());
      txt.setText("");
      txt.requestFocus();
    
    if(e.getSource()==remove)
    {
      lst.remove(lst.getSelectedIndex());
    }
    if(e.getSource()==removeall)
    {
      lst.removeAll();
    }
  }
  }

