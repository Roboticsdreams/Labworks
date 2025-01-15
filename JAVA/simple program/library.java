import java.io.*;
import java.lang.*;
class lib
{
  DataInputStream in=new DataInputStream(System.in);
  String t[]=new String[50];
  String s[]=new String[50];
  String p[]=new String[50];
  String a[]=new String[50];
  int accno[]=new int[10],n,i;
  void getdata()throws IOException
  {
    System.out.println("Enter how many Books :");
    n=Integer.parseInt(in.readLine());
    for(i=1;i<=n;i++)
    {
      System.out.println("Enter the accountno :");
      accno[i]=Integer.parseInt(in.readLine());
      System.out.println("Enter the book title :");
      t[i]=in.readLine();
      System.out.println("Enter the Auther Name :");
      a[i]=in.readLine();
      System.out.println("Enter the Publication :");
      p[i]=in.readLine();
      s[i]="A";
     }
   }
   void draw()throws IOException
   {
     System.out.println("Enter Accno to Search :");
     int acno=Integer.parseInt(in.readLine());
     int c=0;
     for(i=0;i<n;i++)
     {
       if(acno==accno[i]) 
       {
          c=1; 
          s[i]="N";
          break;
        }
        else
        {
          c=0;
         }
      }
      if(c==1)
      {
        System.out.println("You can Draw the Books ");
       }
       else
      {
        System.out.println("You cann't Draw the Books ");
       }
   }
   void set()throws IOException
   {
     System.out.println("Enter the accno to return :");
     int acno=Integer.parseInt(in.readLine());
     int c=0; 
     for(i=0;i<n;i++)
     {
       if(acno==accno[i])
       {
         c=1;
         s[i]="A";
         break;
        }
         else
         {
           c=0;
          }
        }
        if(c==1)
        {
          System.out.println("Your Book is Return");
          }
          else
          {
            System.out.println("Invalid Input ");
           }
      }
      void display()
     {
       System.out.println("Accno \t Title \t Authour \t Publication \t Status");
       System.out.println("******************************************************");
       for(i=1;i<=n;i++)
       {
         System.out.println(accno[i]+"\t"+t[i]+"\t"+a[i]+"\t"+p[i]+"\t"+s[i]);
        }
      }
    }
   class library
{
public static void main(String args[])throws IOException
{
DataInputStream in=new DataInputStream(System.in);
lib a=new lib();
int op;
do
{
System.out.println(" 1. Getdata \n 2. Draw \n 3. Return \n 4. list \n 5. Exit");
System.out.println("Enter Ur Choice :");
op=Integer.parseInt(in.readLine());
switch(op)
{
case 1:
a.getdata();
break;
case 2:
a.draw();
break;
case 3:
a.set();
break;
case 4:
a.display();
break;
case 5:
System.exit(0);
}
}
while(op!=5);
}
}
