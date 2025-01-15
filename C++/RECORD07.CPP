
		/*function overloading*/
#include<iostream.h>
#include<conio.h>
int volume(int);
double volume(double,int);
long volume(long,int,int);
void main()
{
float s,k,h1,l,b,h;
clrscr();
cout<<"\nCUBE";
cout<<"\nEnter the radius:";
cin>>s;
cout<<"\nCYLINDER";
cout<<"\nEnter the radius :";
cin>>k;
cout<<"\nEnter the height:";
cin>>h1;
cout<<"\nRECTANGLE";
cout<<"\nEnter the length:";
cin>>l;
cout<<"\nEnter the breath:";
cin>>b;
cout<<"\nEnter the height:";
cin>>h;
cout<<"\t\tVOLUMES\n";
cout<<"\nCUBE:"<<volume(s);
cout<<"\nCYLINDER:"<<volume(k,h1);
cout<<"\nRECTANGLE:"<<volume(l,b,h);
getch();
}
int volume(int a)
{
return(a*a*a);
}
double volume(double t,int c)
{
return(3.14*t*t*c);
}
long volume(long a,int b,int c)
{
return(a*b*c);
}