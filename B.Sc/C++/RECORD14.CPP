		/*Copy Constructor*/
#include<iostream.h>
#include<conio.h>
class code
{
int id;
public:
	code() {};
	code (int i)
	{
	id=i;
	}
	code (code &x)
	{
	id=x.id;
	}
	void display()
	{
	cout<<id;
	}
};
void main()
{
code A(100);
code B(A);
code C=A;
code D;
D=A;

clrscr();
cout<<"\nId of A:";
A.display();
cout<<"\nId of B:";
B.display();
cout<<"\nId of C:";
C.display();
cout<<"\nId of D:";
D.display();
getch();
}
