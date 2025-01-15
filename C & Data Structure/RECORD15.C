			/*Quicksort*/
#include<stdio.h>
#include<conio.h>
main()
{
int p,q,i,j;
int a[15],d[15];
clrscr();
printf("\nEnter the no of elements to be sorted:");
scanf("%d",&p);
printf("\nEnter the number:");
for(i=0;i<p;i++)
{
scanf("%d",&a[i]);
d[i]=a[i];
}
q=p;
p=0;
printf("\nSorted number using qicksort:");
qsort(a,d,p,q);
printf("\nBefore sorting \t\tAfter  sorting");
for(i=0;i<q;i++)
printf("\n%2d\t\t%2d",a[i],d[i]);
getch();
}
qsort(a,b,m,n)
int a[15],b[15];
int m,n;
{
float t,k;
int i,j;
if(m<n)
{
i=m;
j=n;
k=b[i];
r:
do
i+=1;
while(b[i]<k);
do
j-=1;
while(b[j]>k);
if(i<=j)
{
k=b[i];
b[i]=b[j];
b[j]=k;
goto r;
}
t=b[m];
b[m]=b[j];
b[j]=t;
qsort(a,b,m,j);
qsort(a,b,j+1,n);
}
}

