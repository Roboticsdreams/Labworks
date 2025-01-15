
		/*Polynomial Addition*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int m,n,c[100],a[100],b[100],i,p,q,r;
clrscr();
printf("\nEnter the no of elements in 1st equation:");
scanf("%d",&m);
printf("\nEnter the no of elements in 2nd equation:");
scanf("%d",&n);
printf("\nEnter the elements in 1st equation:");
for(i=2;i<=(2*m+1);i++)
scanf("%d",&a[i]);
printf("\nEnter the elements in 2nd euation in the format of exponents & coefficient:");
for(i=2;i<=(2*n+1);i++)
scanf("%d",&b[i]);
a[1]=m;
b[1]=n;
p=2;
q=2;
r=2;
for(i=0;i<=(((m+n)/2)*1);i++)
{
if(a[p]==b[q])
{
c[r+1]=a[p+1]+b[q+1];
if(c[r+1]!=0)
{
c[r]=a[p];
r+=2;
}
q+=2;
p+=2;
}
else if(a[p]<b[q])
{
c[r+1]=b[q+1];
c[r]=b[q];
r+=2;
q+=2;
}
else if(a[p]>b[q])
{
c[r+1]=a[p+1];
c[r]=a[p];
r+=2;
p+=2;
}
else if(p<=(2*m))
{
c[r]=a[p];
c[r+1]=a[p+1];
p+=2;
r+=2;
}
else if(q<=(2*n))
{
c[r]=b[q];
c[r+1]=b[q+1];
r+=2;
q+=2;
}

}
c[1]=(r/2)-1;
r=r-2;

printf("\npolynomial addition is:\n");
for(i=1;i<=(r+1);i++)
printf("\nc[%d]=%d",i,c[i]);
getch();
}
