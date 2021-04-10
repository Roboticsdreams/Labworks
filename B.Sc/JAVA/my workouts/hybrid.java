import java.io.*;
import java.lang.*;
class student
{
int n,i;
String name[]=new String[10];
String rno[]=new String[10];
void getdata()throws IOException
{
DataInputStream in=new DataInputStream(System.in);
System.out.println("Enter the number of student:");
n=Integer.parseInt(in.readLine());
for(i=1;i<=n;i++)
{
System.out.println("\nEnter the "+i+" Student details:\n");
System.out.println("\nEnter the Name:");
name[i]=in.readLine();
System.out.println("\nEnter the regno:");
rno[i]=in.readLine();
}
}
}
class test extends student
{
int m1[]=new int[10];
int m2[]=new int[10];
int m3[]=new int[10];
void getmark()throws IOException
{
DataInputStream in=new DataInputStream(System.in);
for(i=1;i<=n;i++)
{
System.out.println("\nEnter the "+name[i]+" Student marks:\n");
System.out.println("\nEnter the mark1:");
m1[i]=Integer.parseInt(in.readLine());
System.out.println("\nEnter the mark2:");
m2[i]=Integer.parseInt(in.readLine());
System.out.println("\nEnter the mark3:");
m3[i]=Integer.parseInt(in.readLine());
}
}
}
interface sports
{
void getsw();
}
class result extends test implements sports
{
int tot[]=new int[10];
int avg[]=new int[10];
int sw[]=new int[10];
String grade[]=new String[10];
public void getsw()
{
try
{
for(i=1;i<=n;i++)
{
DataInputStream in=new DataInputStream(System.in);
System.out.println("\nEnter the "+name[i]+" Student marks:\n");
System.out.println("\nEnter the Sport waitage mark:");
sw[i]=Integer.parseInt(in.readLine());
tot[i]=m1[i]+m2[i]+m3[i]+sw[i];
avg[i]=tot[i]/4;
if(avg[i]>=80)
grade[i]="Outsand";
else if(avg[i]>=75 && avg[i]<=79)
grade[i]="Distigue";
else if(avg[i]>=60 && avg[i]<=74)
grade[i]="I class";
else if(avg[i]>=50 && avg[i]<=59)
grade[i]="II class";
else
grade[i]="Fail";
}
}
catch(IOException ie)
{
}
}
void display()
{
System.out.println("\n\t\tStudent MarkSheet\n");
System.out.println("\nSno\tName\tRegno\tMark1\tMark2\tMark3\tSports\tTotal\tAvg     Grade\n");
for(i=1;i<=n;i++)
{
System.out.println("\n"+i+"\t"+name[i]+"\t"+rno[i]+"\t"+m1[i]+"\t"+m2[i]+"\t"+m3[i]+"\t"+sw[i]+"\t"+tot[i]+"\t"+avg[i] +"\t"+grade[i]);
}
}
}

class hybrid
{
public static void main(String args[])throws IOException
{
result r=new result();
r.getdata();
r.getmark();
r.getsw();
r.display();
}
} 

