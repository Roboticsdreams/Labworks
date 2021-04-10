package prime;
import java.io.*;
import java.lang.*;
public class p1
{
public static void getdata()throws IOException
{
DataInputStream in=new DataInputStream(System.in);
int ch;
do
{
System.out.println("\n\nPrime number");
System.out.println("1.Prime or not\n2.Prime numbers\n3.Exit\nEnter your choice:");
ch=Integer.parseInt(in.readLine());
switch(ch)
{
case 1:
{
int i,j,t=0;
System.out.println("Enter the number");
int n=Integer.parseInt(in.readLine());
i=2;
while(i<=n-1)
{
if(n%i==0)
{
System.out.println(n+" is  not a prime number\n\n");
t=5;
break;
}
else
i=i+1;
}
if((n%(i-1))!=0 && t!=5)
{
System.out.println(n+" is a prime number\n\n");
}
break;
}

case 2:
{
int i,n,t=0;
System.out.println("Enter the limit");
int j=Integer.parseInt(in.readLine());
System.out.println("\nPrime numbers between the limits are");
for(n=1;n<=j;n++)
{
i=2;
while(i<=n-1)
{

if(n%i==0)
{
System.out.println(n+" is  not a prime number\n\n");
t=5;
break;
}
else
i=i+1;
}
if((n%(i-1))!=0 && t!=5)
{
System.out.println(n+" is a prime number\n\n");
}
t=0;
}
break;
}
case 3:
break;
}
}while(ch!=3);
}
}
