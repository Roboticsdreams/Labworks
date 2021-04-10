import java.io.*;
import java.lang.*;
class A extends Thread
{
public void run()
{
for(int i=1;i<=5;i++)
{
System.out.println("FROM THREAD A :"+i);
}
System.out.println("Exit From A");
}
}
class B extends Thread
{
public void run()
{
for(int j=1;j<=5;j++)
{
System.out.println("FROM THREAD B :"+j);
}
System.out.println("Exit From B");
}
}
class C extends Thread
{
public void run()
{
for(int k=1;k<=5;k++)
{
System.out.println("FROM THREAD C :"+k);
}
System.out.println("Exit From C");
}
}
class threadpri
{
public static void main(String arg[])
{
 A thA = new A ();
 B thB = new B ();
 C thC = new C ();
thC.setPriority(Thread.MAX_PRIORITY);
thA.setPriority(Thread.MIN_PRIORITY);
thB.setPriority(thA.getPriority()+1);
System.out.println("START THREAD A");
thA.start();
System.out.println("START THREAD B");
thB.start();
System.out.println("START THREAD C");
thC.start();
System.out.println("END OF MAN THREAD");
}
}
