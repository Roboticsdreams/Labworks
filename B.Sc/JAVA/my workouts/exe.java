import java .io.*;
import java.lang.*;
class exe
{
public static void main(String args[])throws IOException
{
int op;
DataInputStream in=new DataInputStream(System.in);
do
{
System.out.println("\n1.Notepad\n2.Paint\n3.VisualBasic\n4.Exit\nEnter your choice:");
op=Integer.parseInt(in.readLine());
switch(op)
{

case 1:
	{
	Process p1=Runtime.getRuntime().exec("Notepad.exe");
	break;
	}

case 2:
	{
        Process p2=Runtime.getRuntime().exec("mspaint.exe");
	break;
	}

case 3:
	{
        Process p3=Runtime.getRuntime().exec("C:\\Program Files\\visuval\\VB98\\VB6.exe");
	brea k;
	}
case 4:
	break;
}
}while(op!=4);

}
}
