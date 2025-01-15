import java.io.*;
import java.lang.*;
class mul
{
  public static void main(String args[])throws IOException
{
 DataInputStream in=new DataInputStream(System.in);
int tno,tl;
System.out.println("Enter the Table Number :");
tno=Integer.parseInt(in.readLine());
System.out.println("Enter the limit for the Table :");
tl=Integer.parseInt(in.readLine());
System.out.println("MULTIPLICATION TABLE");
System.out.println(" ");
int i,j;
int p[]=new int[tl+1];
for(i=1;i<=tl;i++)
{
 p[i]=i*tno;
System.out.println(i+"*"+tno+"="+p[i]);
}
}
}

