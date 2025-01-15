import java.io.*;
import java.lang.*;
import prime.*;
import fibonacci.*;
public class packprg
{
public static void main(String args[])throws IOException
{
DataInputStream in=new DataInputStream(System.in);
int ch;
do
{
System.out.println("\n\nPackage program");
System.out.println("1.Prime or not\n2.Fibonacci series\n3.Exit\nEnter your choice:");
ch=Integer.parseInt(in.readLine());
switch(ch)
{
case 1:
{
prime.p1.getdata();
break;
}

case 2:
{
fibonacci.p2.getdata();
break;
}
case 3:
break;
}
}while(ch!=3);
}
}
