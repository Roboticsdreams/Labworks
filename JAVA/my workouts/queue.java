import java.io.*;
import java.lang.*;
class op
{
static int rear=0,front=0;
static int num;
static int i;
static int q[]=new int[100];
static int l;
void pass(int x)
{
l=x;
}
static void insert ()throws IOException
{
DataInputStream in=new DataInputStream(System.in);
if(rear==l)
{
System.out.println("Queue is full");
}
else
{
System.out.println("\nEnter the number to be inserted in the queue:");
num=Integer.parseInt(in.readLine());
rear=rear+1;
q[rear]=num;
}
}
static void delete()
{
if(front==rear)
{
System.out.println("Queue is empty");
rear=0;
front=0;
}
else
{
front=front+1;
System.out.println("The Delete Element is :"+q[front]);
}
}
static void view()
{
if(rear==front)
System.out.println("Queue is empty");
else
{
System.out.println("\nElements in the queue are:");
for(i=front+1;i<=rear;i++)
{
if(i==front+1)
{
System.out.println("Front-->"+q[i]);
}
else if(rear==i)
{
System.out.println("Rear--->"+q[i]);
}
else
{
System.out.println("\n\t"+q[i]);
}
}
}
}
}
class queue
{
public static void main(String args[])throws IOException
{
DataInputStream in=new DataInputStream(System.in);
op q=new op();
int p;
int lt;
System.out.println("Queue Operation");
System.out.println("Enter the queue limit");
lt=Integer.parseInt(in.readLine());
q.pass(lt);
do
{
System.out.println("\n1.Insert\n2.Delete\n3.View\n4.Exit\nEnter  your Choice:");
 p=Integer.parseInt(in.readLine());
 switch(p)
 {
 case 1:
	q.insert();
	break;
 case 2:
	q.delete();
	break;
 case 3:
	q.view();
	break;
 case 4:
	break;
}
}while(p!=4);
}
}