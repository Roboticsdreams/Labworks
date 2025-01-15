		//Factorial Using Recursive
#include<iostream.h>
#include<conio.h>
long int fact(int);
void main()
{
int n;
long int c;
clrscr();
cout<<"\nEnter the number:";
cin>>n;
c=fact(n);
cout<<"\nThe factorial value of"<<n<<"is"<<c;
getch();
}
long int fact(int n)
{
if(n==0||n==1)
return(1);
else if(n>1)
return(n*fact(n-1));
}