	/*Sorted number*/

#include<iostream.h>
#include<conio.h>
class sort
{
int n,i,j,t,a[100];
public:
	void get();
	void put();
};
void sort::get()
{
cout<<"\nEnter the no of elements:";
cin>>n;
cout<<"\nEnter the numbers:";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
}
void sort::put()
{
cout<<"\nthe Sorted Elements are:";
for(i=0;i<n;i++)
{
cout<<"\n"<<a[i];
}
}
void main()
{
sort s;
clrscr();
s.get();
s.put();
getch();
}