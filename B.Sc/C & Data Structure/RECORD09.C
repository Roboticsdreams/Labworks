		/*linear search*/
#include<stdio.h>
#include<conio.h>
main()
{
int a[100],s,i,j,n;
clrscr();
printf("\nEnter the no of elements:");
scanf("%d",&n);
printf("\nEnter the numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the number to be searched:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("%d is located at the position %d",s,i+1);
getch();
exit(10);
}
}
printf("\nthe number is not present");
getch();
}


