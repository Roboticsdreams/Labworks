		/*Insertion Sort*/
#include<stdio.h>
#include<conio.h>
main()
{
int a[100],n,i,j,t,y;
clrscr();
printf("\nenter the number of elements:");
scanf("%d",&n);
i=1;
do
{
printf("\nEnter the %d item:",i);
scanf("%d",&a[i]);
if(a[i]>1)
{
for(j=1;j<=i;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("\nThe Insertion Sort");
for(y=1;y<=i;y++)
printf("\n%d",a[y]);
i++;
}
while(n>=i);
getch();
}