package descen;
import java.io.*;
public class p2
{
public static void getdata()
{
int t,l1,l2,i,j,n;
int a[]=new int[20];
String name[]=new String[30];
try
{
System.out.println("1.Descending of numbers\n2.Descending of strings\nEnter the choice:");
DataInputStream in=new DataInputStream(System.in);
n=Integer.parseInt(in.readLine());
switch(n)
{
case 1:
{
System.out.println("Enter the limit:");
l1=Integer.parseInt(in.readLine());
System.out.println("\nEnter the numbers:");
for(i=0;i<l1;i++)
{
a[i]=Integer.parseInt(in.readLine());
}
System.out.println("Ascending order of number");
for(i=0;i<l1;i++)
{
for(j=i+1;j<l1;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=(l1-1);i>=0;i--)
{
System.out.println(a[i]);
}
break;
}

case 2:
{
System.out.println("Enter the limit:");
l2=Integer.parseInt(in.readLine());
System.out.println("\nEnter the strings:");
for(i=0;i<l2;i++)
{
name[i]=in.readLine();
}
System.out.println("Ascending order of Strings");
for(i=0;i<l2;i++)
{
for(j=i+1;j<l2;j++)
{
String st;
if(name[i].compareTo(name[j])>0)
{
st=name[i];
name[i]=name[j];
name[j]=st;
}
}
}
for(i=(l2-1);i>=0;i--)
{
System.out.println(name[i]);
}
break;
}
}
}
catch(IOException e)
{
System.out.println(e.getMessage());
}
}
}
