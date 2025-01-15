import java.io.*;
import java.lang.*;
class month
{
public static void main(String args[])throws IOException
{
int y=0,m,d,t,n;
int sn=0;
String mn[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
String s[]={"Winter","Autum","Spring","Summer"};
System.out.println("Enter the days:");
try
{
DataInputStream in=new DataInputStream(System.in);
n=Integer.parseInt(in.readLine());
if(n<=30)
{
y=0;m=0;d=n;
}
else
{
y=n/360;
t=n%360;
m=t/30;
d=t%30;
}
System.out.println("Number of years:"+y);
System.out.println("Number of months:"+m);
if(m==0)
{
m=12;
}
System.out.println("Previous month:"+mn[m-1]);
if(m==12)
{
m=0;
}
System.out.println("Current month:"+mn[m]);
if(m==11)
{
m=-1;
}
System.out.println("Next month:"+mn[m+1]);
System.out.println("Number of days:"+d);
if(m==3||m==4||m==5)
sn=1;
if(m==6||m==7||m==8)
sn=2;
if(m==9||m==10||m==-1)
sn=3;
System.out.println("Season:"+s[sn]);
}
catch(IOException ie)
{
System.out.println(ie.getMessage());
}
}
}
