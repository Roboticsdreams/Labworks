import java.io.*;
import java.lang.*;
class  salesman
{
public static void main(String args[])throws IOException
{
DataInputStream in=new DataInputStream(System.in);
int n,i,j,k,t;
String st;
int q[][]=new int[20][20];
int c[][]=new int[20][20];
int p[]=new int[20];
int a[]=new int[20];
String name[]=new String[20];
String area[]=new String[40];
String pl;
String pname[]={"pendrive","cddrive","dvdwriter","computer"};
System.out.println("\tproduct cost details");
System.out.println(" ");
for(j=0;j<4;j++)
{
System.out.println("Enter the "+pname[j]+"cost:");
p[j]=Integer.parseInt(in.readLine());
}
System.out.println("SALESMAN DETAILS");
System.out.println("Enter the number of salesman");
n=Integer.parseInt(in.readLine());
for(i=0;i<n;i++)
{
System.out.println("Enter the name of salesman");
name[i]=in.readLine();
System.out.println("Enter the area of salesman");
area[i]=in.readLine();
for(j=0;j<4;j++)
{
System.out.println("Enter the numberof"+pname[j]+"sold by"+name[i]);
q[i][j]=Integer.parseInt(in.readLine());
c[i][j]=q[i][j]*p[j];
a[i]+=c[i][j];
}
}
System.out.println("\n\tSALESMAN PROBLEM");
System.out.println("*************************************************************************");
System.out.println("Name\tArea\tPendrive\tCDdrive\tDVDwriter\tComputer\tTotal\n");
System.out.println("*************************************************************************");
for(i=0;i<n;i++)
{
System.out.println("\n"+name[i]+"\t"+area[i]+"\t"+q[i][0]+"\t"+q[i][1]+"\t"+q[i][2]+"\t"+q[i][3]+"\t"+a[i]+"\n");
}
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
pl=area[i];
area[i]=area[j];
area[j]=pl;
}
}
}
System.out.println("\n\n\t Highest sales achiered by:"+name[0]+"in"+area[0]+"at Rs"+a[0] );
}
}
