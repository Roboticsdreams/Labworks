import java.io.*;
class ran
{
public static void main(String args[])throws IOException
{
int i,u,l,n=0,j=0;
int value[]=new int[25];
int group[]=new int[25];
DataInputStream in=new DataInputStream(System.in);
System.out.println("\t\tCounting number between the limit");
System.out.println("Enter the 10 numbers:");
for(i=0;i<10;i++)
{
value[i]=Integer.parseInt(in.readLine());
}

System.out.println("Enter the start limit:");
l=Integer.parseInt(in.readLine());
System.out.println("Enter the end limit:");
u=Integer.parseInt(in.readLine());
for(i=0;i<10;i++)
{
if((l<=value[i])&&(u>=value[i]))
{
n++;
j=j+1;
group[j]=value[i];
}
}
if(n==0)
{
System.out.println("There is no result found");
}
else
{
System.out.println("Numbers between the "+l+" to"+u+"are:"+n);
System.out.println("The numbers are:");
for(i=1;i<=j;i++)
{
System.out.println(group[i]);
}
}
}
}