			/*Inline function*/
#include<iostream.h>
#include<conio.h>
inline float add(float x,float y)
{
return(x+y);
}
inline float sub(float a,float b)
{
return(a-b);
}
inline float mul(float c,float d)
{
return(c*d);
}
inline double div(double a,double b)
{
return(a/b);
}
void main()
{
float a,b;
clrscr();
cout<<"Enter the A & B values:";
cin>>a>>b;
cout<<"\nArithematic Calculation";
cout<<"\nAddition="<<add(a,b);
cout<<"\nSubtraction="<<sub(a,b);
cout<<"\nMultiplication="<<mul(a,b);
cout<<"\nDivision="<<div(a,b);
getch();
}