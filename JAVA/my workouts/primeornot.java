import java.io.*;
import java.lang.*;
class primeornot
{
public static void main(String args[])throws IOException
{
int i,j,t=0;
DataInputStream in=new DataInputStream(System.in);
System.out.println("Enter the number");
int n=Integer.parseInt(in.readLine());
i=2;
while(i<=n-1)
{
if(n%i==0)
{
System.out.println(n+"is  not a prime number");
t=5;
break;
}
else
i=i+1;
}
if((n%(i-1))!=0 && t!=5)
{
System.out.println(n+" is a prime number");
}
}
}