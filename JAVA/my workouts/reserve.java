import java.io.*;
import java.lang.*;
class bus
{
String name ,tot,dt1,dt,add,sc;
int km,h,m;
void getdata()throws IOException
{
DataInputStream in=new DataInputStream(System.in);
System.out.println("Enter the Following details:");
System.out.println("Name:");
name=in.readLine();
System.out.println("Address:");
add=in.readLine();
System.out.println("Source place:");
sc=in.readLine();
System.out.println("Destination  place:");
tot=in.readLine();
System.out.println("Kilometers:");
km=Integer.parseInt(in.readLine());
System.out.println("Data booked:");
dt=in.readLine();
}
}
class ticket extends bus
{
int f,n,tri;
double amt=0.08;
double kamt=0.08;
void fame()throws IOException
{
DataInputStream in=new DataInputStream(System.in);
System.out.println("Date of journey:");
dt1=in.readLine();
System.out.println("Enter the time:");
System.out.println("Hour");
h=Integer.parseInt(in.readLine());
System.out.println("Minute");
m=Integer.parseInt(in.readLine());
System.out.println("Full Ticket:");
f=Integer.parseInt(in.readLine());
System.out.println("Half Ticket:");
n=Integer.parseInt(in.readLine());
kamt=km*1.50;
amt=(f*kamt)+(n*(kamt/2));
}
void display()throws IOException
{
System.out.println("BUS RESERVATION");
System.out.println("Name:"+name+"\tAddress:"+add);
System.out.println("Date of journey:"+dt1+"\tTime:"+h+":"+m);
System.out.println("Source:"+sc+"\tDestination:"+tot);
System.out.println("Full Ticket:"+f);
System.out.println("Half Ticket:"+n);
System.out.println("Total number of tickets:"+(f+n));
System.out.println("\n\tAmount to be paid:"+amt);
}
}
class reserve
{
public static void main(String args[])throws IOException
{
ticket R=new ticket();
R.getdata();
R.fame();
R.display();
}
}

