import java.io.*;
class ran
{
public static void main(String args[])throws IOException
{
int i,u,l,n=0,j=0;
int l1,t;
int value[]=new int[25];
int group[]=new int[25];
DataInputStream in=new DataInputStream(System.in);
System.out.println("\t\tCounting number between the limit");
System.out.println("Enter the how many numbers:");
l1=Integer.parseInt(in.readLine());
System.out.println("Enter the numbers:");


for(i=0;i<l1;i++)
{
value[i]=Integer.parseInt(in.readLine());
}

System.out.println("Enter the start limit:");
l=Integer.parseInt(in.readLine());
System.out.println("Enter the end limit:");
u=Integer.parseInt(in.readLine());

for(i=0;i<l1;i++)
{
if((l<=value[i])&&(u>=value[i]))
{
n++;
j=j+1;
group[j]=value[i];
}
}

for(i=0;i<n;i++)
{
for(j=i+1;j<=n;j++)
{
if(group[i]>group[j])
{
t=group[i];
group[i]=group[j];
group[j]=t;
}
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
for(i=1;i<=n;i++)
{
System.out.println(group[i]);
}
}

}
}