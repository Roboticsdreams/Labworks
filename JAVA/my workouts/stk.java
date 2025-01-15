import java.io.*;
import java.lang.*;
class stk
{
   static int a[]=new int[10];
  static int i=0,j=0,k=0;
  static void push()throws IOException
    {
    DataInputStream in=new DataInputStream(System.in);
   System.out.println("Enter the number to Push:");
   a[i]=Integer.parseInt(in.readLine());
   i++;
    }
    static void pop()
    { 
    j=i;
    j--;
   if(j<0)
      {
       System.out.println("The Stack has no values"); 
       }
  else
     {
     System.out.println("The poped value is"+a[i-1]);
     i=j; 
     } 
  }
 static void view()
 {
 k=i;
 if(i==0)
  {
  System.out.println("The Stack has empty");
  }
 else
  {
  System.out.println("View");
  for(k=i-1;k>=0;k--)
   {
   System.out.println(a[k]);
   }
  }
  }
 }
class stack
{
public static void main(String args[])throws IOException
 {
 stk e=new stk();
 int p;
 do
 {
  System.out.println("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter the    your choice:");
 DataInputStream in=new DataInputStream(System.in);
 p=Integer.parseInt(in.readLine());
 switch(p)
 {
 case 1:
	e.push();
	break;
 case 2:
	e.pop();
	break;
 case 3:
	e.view();
	break;
 case 4:
	break;
}
}while(p!=4);
}
}