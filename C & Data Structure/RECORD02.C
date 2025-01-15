			/*Magic Square*/
#include<stdio.h>
#include<conio.h>
main()
{
int i=0,j,cnt,n,a[10][10];
clrscr();
printf("\n\t\t\tMagic Square");
printf("\nEnter the number:");
scanf("%d",&n);
j=(n+1)/2;
for(cnt=1;cnt<=(n*n);cnt++)
{
a[i][j]=cnt;
if(cnt%n==0)
{
i++;
}
else
{
if(i==1)
i=n;
else
i--;
if(j==n)
j=1;
else
j++;
}
}
printf("\n");
for(i=1;i<=n;i++)
{
if(n%2==0)
{
printf("\nThere is no Matrix for Even numbers");
break;
}
for(j=1;j<=n;j++)
printf("\t%d",a[i][j]);
printf("\n");
}
getch();
}

