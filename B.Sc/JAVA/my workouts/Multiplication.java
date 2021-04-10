import java.io.*;
import java.lang.*;
class Multiplication
{
public static void main(String args[])throws IOException
{
DataInputStream in=new DataInputStream(System.in);
int tno,tl;
System.out.println("Enter the Table number:");
tno=Integer.parseInt(in.readLine());
System.out.println("Enter the Limit for the table:");
tl=Integer.parseInt(in.readLine());
System.out.println("\nMultiplication Table");
System.out.println("   ");
int i,j;
int P[]=new int[tl+1];
for(i=1;i<=tl;i++)
{
P[i]=i*tno;
System.out.println(i+"*"+tno+"="+P[i]);
}
}
}
