		/*Binary search*/
#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a[100],j,t,x,lower,upper,mid;
clrscr();
printf("\nEnter the number of elements:");
scanf("%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
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
printf("\nThe Ascending order:");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
printf("\nEnter the no to be searched:");
scanf("%d",&x);
lower=0;
upper=n;
while(lower<=upper)
{
mid=(lower+upper)/2;
if(x>a[mid])
lower=mid+1;
else if(x<a[mid])
upper=mid-1;
else if(x==a[mid])
{
printf("\n%d is located at the position %d",x,mid+1);
getch();
exit();
}
}
if(x!=a[mid])
printf("\nthe number is not present");
getch();
}