		/*Biggest Among N Numbers*/
#include<iostream.h>
#include<conio.h>
class big
{
int n,a[100],i,j,t;
public:
	void get();
	void put();
};
void big::get()
{
cout<<"\nEnter the number of elements:";
cin>>n;
cout<<"\nEnter the numbers:";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
if(a[i]<a[j])
a[i]=a[j];
}
}
void big::put()
{
cout<<"\nThe Biggest number is:"<<a[i];
}
void main()
{
big b;
clrscr();
b.get();
b.put();
getch();
}