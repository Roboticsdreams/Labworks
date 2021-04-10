import java.io.*;
import java .lang.*;
class range
{
public static void main(String args[])throws IOException
{
int i,low,high,l,n=0;
float value[]=new float[100];
int group[]=new int[11];
DataInputStream in=new DataInputStream(System.in);
System.out.println("\tCOUNTING NUMBERS BETWEEN THE LIMIT");
System.out.println("Enter the limit of number");
l=Integer.parseInt(in.readLine());
System.out.println("Enter the "+l+"Numbers");
for(i=0;i<l;i++)
{
value[i]=Integer.parseInt(in.readLine());
if(value[i]>=100)
{
n=n+1;
}
else
{
++group[(int)(value[i]/10)];
}
}
System.out.println();
System.out.println("\tCOUNTING NUMBERS BETWEEN THE LIMIT");
System.out.println("\t----------------------------------------------------");
System.out.println("\tRange Frequency");
System.out.println("\t-----------------------------------------------------");
for(i=0;i<10;i++)
{
low=i*10;
high=low+9;
System.out.println("\t"+low+" to"+high+" :"+group[i]);
}
System.out.println("\t100 and above:"+n);
}
}

