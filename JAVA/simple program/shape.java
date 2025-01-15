import java.io.*;
import java.lang.*;
class overload
{
  void area(int a)
   {
     int sq;
     sq=a*a;
     System.out.println("Area of Square :"+sq);
    }
     void area(int l,int b)
    {
      int rect;
      rect=l*b;
      System.out.println("Area of Rectangle :"+rect);
    }
     void area(double r)
    {
     double ir;
     ir=3.14*r*r;
     System.out.println("Area of  Circle :"+ir);
    }
     void area(double b,double h)
    {
     double tri;
     tri=0.5*b*h;
     System.out.println("Area of Tringle :"+tri);
    }
 }
 class shape 
 {
  public static void main(String args[])throws IOException
  {
   DataInputStream in=new DataInputStream(System.in);
   int ch;
   overload A= new overload();
   do
   {
    System.out.println("Area of Shapes \n 1.Square \n 2.Rectangle \n 3.Circle \n 4.Triangle \n 5.Exit \n Enter Ur Choice :");
     ch=Integer.parseInt(in.readLine());
    switch(ch)
    {
     case 1:
       {
         System.out.println("Area of Square :");
         System.out.println("Enter the Value :");
         int a=Integer.parseInt(in.readLine());
         A.area(a);
         break;
       }
       case 2:
        {
         System.out.println("Area of Rectangle \n Enter a and b Values :");
         int a=Integer.parseInt(in.readLine());
         int b=Integer.parseInt(in.readLine());
         A.area(a,b);
         break;
        }
        case 3:
         {
           System.out.println("Area of Circle \n Enter a Value :");
           double x=Integer.parseInt(in.readLine());
          A.area(x);
          break;
         }
         case 4:
         {
           System.out.println("Area of Triangle :");
           System.out.println("Enter b & h Value :");
           double m=Integer.parseInt(in.readLine());
           double n=Integer.parseInt(in.readLine());
           A.area(m,n);
           break;
         }
         case 5 :
        {        
          System.out.println("Exit");
         }
      }
    }
    while(ch!=5);
 }
}
