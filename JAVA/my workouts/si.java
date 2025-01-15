import java.io.*;
import java.lang.*;
class Interest
{
double a,b,c;
Interest(double p,double n,double  r)
{
a=p;
b=n;
c=r;
}
double simple()
{
return((a*b*c)/100);
}
}
class si
{
public static void main(String args[])throws IOException
{
DataInputStream in=new DataInputStream(System.in);
int a,b;
float c;
System.out.println("Enter the Principle value:");
a=Integer.parseInt(in.readLine());
System.out.println("Enter the Netpay value:");
b=Integer.parseInt(in.readLine());
System.out.println("Enter the Rate of interest value:");
c=Integer.parseInt(in.readLine());
Interest R=new Interest(a,b,c);
double SIV=R.simple();
System.out.println("Simple Interest values:"+SIV);
}
}
