import java.io.*;
import java.lang.*;
class simple
{
public static void main(String args[])throws IOException
{
System.out.println("Enter the Name:");
DataInputStream in=new DataInputStream(System.in);
String n=in.readLine();
System.out.println("Name="+n);
}
}