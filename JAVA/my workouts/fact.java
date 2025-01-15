import java.io.*;
import java.lang.*;
class factorial
{
long fact(int n)
{
long res;
if(n==0||n==1)
return(n);
else
res =n*fact(n-1);
return(res);
}
}
class fact
{
public static void main(String args[])throws IOException{
factorial f=new factorial();
DataInputStream in=new DataInputStream(System.in);
System.out.println("Enter the number");
int n=Integer.parseInt(in.readLine());
System.out.println(n+"!="+f.fact(n));
}
}

