import java.io.*;
import java.lang.*;
class salesman
{
public static void main(String args[])throws IOException
{
DataInputStream in=new DataInputStream(System.in);
int n,i,j,t;
String st;
int q[][]=new int [20][20];
int c[][]=new int [20][20];
int p[]=new int [20];
int a[]=new int [20];
String name[]=new String[20];
String area[]=new String[40];
String pname[]={"pendrive","CD drive","DVD Writer","Computer"};
System.out.println("\tProduct cost details");
System.out.println("	");
for(j=0;j<4;j++)
{
System.out.println("Enter the "+pname[j]+"cost");
p[j]=Integer.parseInt(in.readLine());
}
System.out.println("\n\tSalesman details");
System.out.println("\nEnter the number of salesman:");
n=Integer.parseInt(in.readLine());
for(i=0;i<n;i++)
{
System.out.println("\nEnter the name of salesman:");
name[i]=in.readLine();
System.out.println("Enter the area of salesman:");
area[i]=in.readLine();
for(j=0;j<4;j++)
{
System.out.println("Enter the number of  "+pname[j]+"  sold by\t"+name[i]);
q[i][j]=Integer.parseInt(in.readLine());
c[i][j]=q[i][j]*p[j];
a[i]+=c[i][j];
}
}
System.out.println("\n\nSALESMAN PROBLEM");
System.out.println("**************************************************************************");
System.out.println("Name\t\tArea  Pendrive CD Drive  DVD Writer  Computer   Total\n");
System.out.println("**************************************************************************");
for(i=0;i<n;i++)
{
System.out.println("\n"+name[i]+"\t"+area[i]+"\t"+q[i][0]+"\t"+q[i][1]+"\t"+q[i][2]+"\t"+q[i][3]+"\t"+a[i]+"\n");
}
System.out.println("***************************************************************************");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
st=name[i];
name[i]=name[j];
name[j]=st;
}
}
}
System.out.println("\n\n\tHighest sales acheived by:"+name[0]);
}
}
