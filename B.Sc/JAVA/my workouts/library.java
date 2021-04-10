import java.io.*;
import java.lang.*;
class lib
{
DataInputStream in=new DataInputStream(System.in);
String t[]=new String[50];
String s[]=new String[50];
String p[]=new String[50];
String a[]=new String[50];
int accno[]=new int[10];
int n,i;
int c,acno;
void getdata()throws IOException
{
System.out.println("Enter the how many books:");
n=Integer.parseInt(in.readLine());
for(i=0;i<n;i++)
{
System.out.println("Enter the account no:");
accno[i]=Integer.parseInt(in.readLine());
System.out.println("Enter the book title:");
t[i]=in.readLine();
System.out.println("Enter the author name:");
a[i]=in.readLine();
System.out.println("Enter the publication name:");
p[i]=in.readLine();
s[i]="A";
}
}

void draw()throws IOException
{
System.out.println("Enter the account for search:");
acno=Integer.parseInt(in.readLine());
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
System.out.println("You can draw the book:");
}
else
{
System.out.println("You cannot draw the book:");
}
}
void set()throws IOException
{
System.out.println("Enter the account no to be search:");
int an=Integer.parseInt(in.readLine());
int c=0;
for(i=1;i<n;i++)
{
if(an==accno[i])
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
if(c==0)
System.out.println("Your book is returned");
else
System.out.println("Your book is not returned");
}
void display()throws IOException
{
System.out.println("Account	Title\tAuthor\tPublication\tStatus\n");
for(i=0;i<n;i++)
System.out.println(accno[i]+"\t"+t[i]+"\t"+a[i]+"\t"+p[i]+"\t\t"+s[i]);
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
System.out.println("\n\n1.Getdata\n2.Draw\n3.Return\n4.List\n5.Exit\nEnter your choice:");
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
}while(op!=5);
}
}
