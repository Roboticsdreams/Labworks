			/*Transpose matrix*/
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
printf("\nthe transpose matrix:\n");
for(j=1;j<=n;j++)
{
for(i=1;i<=m;i++)
printf("\t%d",a[i][j]);
printf("\n");
}
getch();
}