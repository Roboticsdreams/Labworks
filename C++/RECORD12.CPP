		/* String Manipluation*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
class str
{
char s1[50];
public:
	void getstring();
	void operator&&(str);
	void operator==(str);
};
void str::getstring()
{
cout<<"\nEnter the String:";
cin>>s1;
}
void str::operator&&(str s2)
{
char s[50];
strcpy(s,s1);
if(strlen(s)+strlen(s2.s1)<50)
strcat(s,s2.s1);
cout<<"\nThe concatnate string is:"<<s;
}
void  str::operator==(str s2)
{
int i,n;
n=strlen(s1);
for(i=0;i<n;i++)
{
s1[i]=toupper(s1[i]);
s2.s1[i]=toupper(s2.s1[i]);
}
if(strcmp(s1,s2.s1)==0)
cout<<"\nThe given strings are equal";
else
cout<<"\nThe Given strings are not equal";
}
void main()
{
str x,y;
clrscr();
x.getstring();
y.getstring();
x&&y;
x==y;
getch();
}