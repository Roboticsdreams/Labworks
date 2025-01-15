import java.io.*;
import java.lang.*;
class mon
{
public static void main(String args[])throws IOException
{
int y=0,m,d,n,t;
int sn=0;
String mn[]={"January","Feburary","March","April","May","June","July","August","September","October","November","December"};
String s[]={"Winter","Summer","Spring","Autum"};
System.out.println("Enter your days:");
try
{
DataInputStream in=new DataInputStream(System.in);
n=Integer.parseInt(in.readLine());
if(n<=31)
{
y=0;
m=0;
d=n;
}
else
{
y=n/365;
t=n%365;
m=t/30;
d=t%30;
}
System.out.println("Number of   years:"+y);
System.out.println("Number of  months:"+m);
 if(m==0)
{
m=12;
}
System.out.println("Previous    month:"+mn[m-1]);
 if(m==12)
{
m=0;
}
System.out.println("Current     month:"+mn[m]);
 if(m==11)
{
m=-1;
}
System.out.println("Next        month:"+mn[m+1]);
switch(m)
{
case 1:
	d=d-1;
	break;
case 2:
	d=d+1;
	break;
case 5: 
	d=d-1;
	break;
case 6:
	d=d-1;
	break;
case 7:
	d=d-2;
	break;
case 8:
	d=d-3;
	break;
case 9:
	d=d-3;
	break;
case 10:
	d=d-4;
	break;
case -1:
	d=d-7;
	break;
case 12:
case 0:
	d=d-5;
	break;

}
if(d<=0)
d=0;
System.out.println("Number of    days:"+d);
if(m==0||m==1||m==2||m==12)
{
sn=0;
}
if(m==3||m==4||m==5)
{
sn=1;
}
if(m==6||m==7||m==8)
{
sn=2;
}
if(m==9||m==10||m==-1)
{
sn=3;
}
System.out.println("Season           :"+s[sn]);
}
catch(IOException e)
{
System.out.println(e.getMessage());
}
}
}