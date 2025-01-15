import java.io.*;
import java.lang.*;
import asen.*;
import descen.*;
public class sort2pac
{
public static void main(String args[])
{
int ch;
try
{
DataInputStream in=new DataInputStream(System.in);
System.out.println("1.Ascending order\n2.Descending order\nEnter the choice:");
ch=Integer.parseInt(in.readLine());
switch(ch)
{
case 1:
{
asen.p1.getdata();
break;
}
case 2:
{
descen.p2.getdata();
break;
}
}
}
catch(IOException ie)
{
}
}
}