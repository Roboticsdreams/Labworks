			/*Bubble Sort*/
#include<stdio.h>
#include<conio.h>
main()
{
int a[100],n,i,j,y;
clrscr();
printf("\nenter the number of elements:");
scanf("%d",&n);
printf("\nEnter the  items:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
printf("\nThe Ascending order:");
for(y=0;y<n;y++)
printf("\n%d",a[y]);
printf("\nThe descending order:");
for(y=n-1;y>=0;y--)
printf("\n%d",a[y]);
getch();
}