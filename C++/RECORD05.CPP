		/*Matrix Addition*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10];
int i,j,r1,r2,c1,c2;
clrscr();
cout<<"\nEnter the no of elements in A matrix:";
cin>>r1>>c1;
cout<<"\nEnter the no of elements in B matrix:";
cin>>r2>>c2;
cout<<"\nEnter the A Matrix elements:";
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
cin>>a[i][j];
cout<<"\nEnter the B Matrix elements:";
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
cin>>b[i][j];
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
c[i][j]=a[i][j]+b[i][j];
cout<<"\nThe Addition of A&B matrix:\n";
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
cout<<"\t"<<c[i][j];
cout<<"\n";
}
getch();
}
