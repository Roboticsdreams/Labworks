		/*Friend Function*/
#include<iostream.h>
#include<conio.h>
class ABC;
class XYZ
{
int x;
public:
	void getvalue(int i)
	{
	x=i;
	}
	friend void max(XYZ,ABC);
};
class ABC
{
int a;
public:
	void getvalue(int i)
	{
	a=i;
	}
	friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n)
{
if(m.x>=n.a)
{
cout<<"\nMaximum Value is:"<<m.x;
}
else
cout<<"\nMaximum Value is:"<<n.a;
}
void main()
{
ABC abc;
XYZ xyz;
clrscr();
xyz.getvalue(10);
abc.getvalue(100);
max(xyz,abc);
getch();
}