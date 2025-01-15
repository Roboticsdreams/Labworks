		       /*Binomial Coefficient*/
#include<stdio.h>
#include<conio.h>
main()
{
long int n,R,ncr=1;
long int fact(long int);
clrscr();
printf("\n\t\tBinomial coefficient");
printf("\nEnter the  coefficient of n & R values:");
scanf("%ld %ld",&n,&R);
ncr=(fact(n)/(fact(R)*fact(n-R)));
printf("\nThe binomial coefficient of ncr=%ld",ncr);
getch();
}
long int fact(long int n)
{
if(n==0||n==1)
return(1);
else if(n>1)
return(n*fact(n-1));
}