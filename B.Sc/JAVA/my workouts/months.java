import java.io.*;
import java.lang.*;
class months
{
public static void main(String  args[])throws IOException
{
int y=0,m,d,n,t;
System.out.println("Enter your Days:");
try
{
DataInputStream in=new DataInputStream(System.in);
n=Integer.parseInt(in.readLine());
y=n/365;
t=n%365;
m=t/30;
d=t%30;
System.out.println("Number of Years:"+y);
System.out.println("Number of Months:"+m);
if(m==1)
{
System.out.println("Completed Month:January");
System.out.println("Current Month     :February");
}
else if(m==2)
{
System.out.println("Completed Month:February");
System.out.println("Current Month     :March");
}
else if(m==3)
{
System.out.println("Completed Month:March");
System.out.println("Current Month     :April");
}
else if(m==4)
{
System.out.println("Completed Month:April");
System.out.println("Current Month     :May");
}
else if(m==5)
{
System.out.println("Completed Month:May");
System.out.println("Current Month     :June");
}
else if(m==6)
{
System.out.println("Completed Month:June");
System.out.println("Current Month     :July");
}
else if(m==7)
{
System.out.println("Completed Month:July");
System.out.println("Current Month     :August");
}
else if(m==8)
{
System.out.println("Completed Month:August");
System.out.println("Current Month     :September");
}
else if(m==9)
{
System.out.println("Completed Month:September");
System.out.println("Current Month     :October");
}
else if(m==10)
{
System.out.println("Completed Month:October");
System.out.println("Current Month     :November");
}
else if(m==11)
{
System.out.println("Completed Month:November");
System.out.println("Current Month     :December");
}
else if(m==12)
{
System.out.println("Completed Month:December");
System.out.println("Current Month     :January");
}
System.out.println("Number of Days:"+d);
if(m==12||m==1||m==2)
{
System.out.println("Season=Winter");
}
else if(m==3||m==4||m==5)
{
System.out.println("Season=Autumn");
}
else if(m==6||m==7||m==8)
{
System.out.println("Season=Spring");
}
else if(m==9||m==10||m==11)
{
System.out.println("Season=Summer");
}
}
catch(IOException ie)
{
System.out.println(ie.getMessage());
}
}
}