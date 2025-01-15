			/*Counting No of Digits*/
#include<iostream.h>
#include<conio.h>
class digit
{
int c,n,i;
char s[30];
public:
	void get();
	void put();
};
void digit::get()
{
cout<<"\nEnter the number:";
cin>>s;
}
void digit::put()
{
c=0,i=0;
while(s[i]!='\0')
{
switch(s[i])
{
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':c++;
       break;
}
i++;
}
cout<<"\nThe number of digits:"<<c;
}
void main()
{
digit d;
clrscr();
d.get();
d.put();
getch();
}