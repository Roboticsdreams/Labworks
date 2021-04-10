		/*Overloading Binary Operator*/
#include<iostream.h>
#include<conio.h>
class str
{
int s1;
public:
	void get();
	void operator + (str);
	void operator - (str);
	void operator * (str);
	void operator / (str);
};
void str::get()
{
cout<<"\nEnter the number:";
cin>>s1;
}
void str::operator+(str s2)
{
cout<<"\nAddition="<<s1+s2.s1;
}
void str::operator-(str s2)
{
cout<<"\nSubtraction="<<s1-s2.s1;
}
void str::operator*(str s2)
{
cout<<"\nMultiplication="<<s1*s2.s1;
}
void str::operator/(str s2)
{
cout<<"\nDivision="<<s1/s2.s1;
}
void main()
{
str x,y;
clrscr();
x.get();
y.get();
x+y;
x-y;
x*y;
x/y;
getch();
}