import java.io.*;
import java.lang.*;
class details
{
String name,tot,dt1,dt,add,sc;
int km,h,m;
void getdata()throws IOException
{
DataInputStream in=new DataInputStream(System.in);
System.out.println("Enter the Following Details :");
System.out.println("Name :");
name=in.readLine();
System.out.println("Address :");
add=in.readLine();
System.out.println("Sourse place :");
sc=in.readLine();
System.out.println("Destination place :");
tot=in.readLine();
System.out.println("Kilometers :");
km=Integer.parseInt(in.readLine());
System.out.println("Data booked :");
dt=in.readLine();
}
}
class bus extends details
{
int f,n;
double amt=0.08;
double kamt=0.08;
void frame()throws IOException
{
 DataInputStream in=new DataInputStream(System.in);
System.out.println("Date of Journey :");
dt1=in.readLine();
System.out.println("Enter the time :");
System.out.println("Hour :");
m=Integer.parseInt(in.readLine());
System.out.println("Minute :");
h=Integer.parseInt(in.readLine());
System.out.println("Full Ticket :");
f=Integer.parseInt(in.readLine());
System.out.println("Half Ticket :");
n=Integer.parseInt(in.readLine());
kamt=km*1.50;
amt=f*kamt+n*(kamt/2);
}
void display()throws IOException
{
System.out.println("\n\t\tBus Reservation System\n"); 
System.out.println("Name :"+name+"\t\t\t Address :"+add);
System.out.println("\nDate of Journey :"+dt+"\t\tTime :"+h+":"+m);
System.out.println("\t Sourse :"+sc+"\t\t Destination :"+tot);
System.out.println("Full Ticket :"+f);
System.out.println("Half Ticket :"+n);
System.out.println("Total No.Of Ticket :"+(f+n));
System.out.println("\n\t Amount to b paid :"+amt);
}
}
class reserve
{
public static void main(String args[])throws IOException
{
 bus r=new bus();
r.getdata();
r.frame();
r.display();
}
}

