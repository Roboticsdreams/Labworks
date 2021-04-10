import java.io.*;
import java.lang.*;
class msquare
{
public static void main(String args[]) throws IOException
{
DataInputStream in=new DataInputStream(System.in);
int i=0,n,j,c;
int a[][]=new int[10][10];
System.out.println("Enter the number of rows:");
n=Integer.parseInt(in.readLine());
j=1;
for(c=0;c<=(n*n);c++)
{
a[i][j]=c;
if(c%n==0)
i++;
else
{
if(i==1)
i=n;
else
i--;
if(j==n)
j=1;
else
j++;
}
}


System.out.println("\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
System.out.print("\t"+a[i][j]);
System.out.println("\n");
}
}
}