			/*Avoiding Duplicates in Array*/
#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k,t,n,a[10],b[10];
clrscr();
printf("\n\t\tAvoiding Duplicates in Array");
printf("\nEnter the number of elements:");
scanf("%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
j=0;
for(i=0;i<n;i++)
if(a[i]!=a[i+1])
{
b[j]=a[i];
j++;
}
k=0;
for(i=0;i<j;i++)
{
a[i]=b[k];
k++;
}
printf("\nAvoiding duplicates are:");
for(i=0;i<k;i++)
printf("\n%d",a[i]);
getch();
}

