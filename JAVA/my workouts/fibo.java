import java.io.*;
import java.lang.*;
class fibo
{
public static void main(String args[])throws IOException
{
int n,i=1,f1=0,f2=1,f3;
DataInputStream in=new DataInputStream(System.in);
System.out.println("Enter the limit for fibonacci series");
n=Integer.parseInt(in.readLine());
System.out.println("Fibonacci Series \n\n"+f1+"\n\n"+f2);
do
{
f3=f1+f2;
System.out.println("\n"+f3);
f1=f2;
f2=f3;
i++;
}while(i<n-2);
}
}
