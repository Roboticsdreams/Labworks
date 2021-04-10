import java.io.*;
import java.lang.*;
class A  extends Thread
{
public void run()
{
for(int i=1;i<=5;i++)
{
System.out.println("FROM THREAD A:"+i);
}
System.out.println("EXIT FROM A");
}
}
class B  extends Thread
{
public void run()
{
for(int j=1;j<=5;j++)
{
System.out.println("\t\tFROM THREAD B:\t\t"+j);
}
System.out.println("\t\tEXIT FROM B");
}
}
class C extends Thread
{
public void run()
{
for(int k=1;k<=5;k++)
{
System.out.println("FROM THREAD C:"+k);
}
System.out.println("EXIT FROM C");
}
}
class threadpri
{
public static void main(String args[])
{
A thA=new A();
B thB=new B();
C thC=new C();
thA.setPriority(Thread.MIN_PRIORITY);
thC.setPriority(Thread.MAX_PRIORITY);
thB.setPriority(thA.getPriority()+1);
System.out.println("START THREAD A");
thA.start();
System.out.println("START THREAD B");
thB.start();
System.out.println("START THREAD C");
thC.start();
System.out.println("END OF MAIN THREAD");
}
}