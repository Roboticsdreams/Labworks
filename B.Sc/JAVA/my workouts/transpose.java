import java.io.*;
import java.lang.*;
class transpose
{
public static void main(String args[])throws IOException
{
int m,n,i,j;
int a[][]=new int[10][10];
DataInputStream in=new DataInputStream(System.in);
System.out.println("\nEnter the no of rows & columns limits :");
m=Integer.parseInt(in.readLine());
n=Integer.parseInt(in.readLine());
System.out.println("Enter the matrix value:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
a[i][j]=Integer.parseInt(in.readLine());
}
}
System.out.println("The Given Matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
System.out.print("\t"+a[i][j]);
}
System.out.println("\n");
}
System.out.println("The Transpose Matrix");
for(j=0;j<n;j++)
{
for(i=0;i<m;i++)
{
System.out.print("\t"+a[i][j]);
}
System.out.println("\n");
}
}
}


