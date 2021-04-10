import java.io.*;
import java.lang.*;
class tra
{
public static void main(String args[])throws IOException
{
static int m,n;
int i,j;
int a[][]=new int[10][10];
DataInputStream in=new DataInputStream(System.in);
System.out.println("Enter the no of rows & columns limits for transpose matrix:");
m=Integer.parseInt(in.readLine());
n=Integer.parseInt(in.readLine());
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
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
System.out.print("\t"+a[i][j]);
}
System.out.println("\n");
}
}
}



