			/*Sparse matrix*/
#include<stdio.h>
#include<conio.h>
main()
{
int m,n,c=0,i,j,a[10][10];
clrscr();
printf("\nEnter the row & column values:");
scanf("%d %d",&m,&n);
printf("\nEnter the values:");
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("\nThe given matrix is:\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
printf("\t%d",a[i][j]);
printf("\n");
}
printf("\n\t\tSparse matrix %d x %d",m,n);
printf("\nRows\t\tColumns\t\tvalues");
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
{
if(a[i][j]!=0)
printf("\n%d\t\t%d\t\t%d",i,j,a[i][j]);
else
c++;
}
printf("\nThe numberof zero elements: %d",c);
getch();
}

