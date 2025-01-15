#include<stdio.h>
#include<conio.h>
int qu[5],r=0,f=0;
void main()
{
int n=1,ch,i;
clrscr();
do
{
printf("\n\t\t\tMenu");
printf("\n1.insert");
printf("\n2.delete");
printf("\n3.view");
printf("\n4.exit");
printf("\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
dlete();
break;
case 3:
view();
break;
case 4:
exit();
break;
}
}
while(n);
getch();
}


insert()
{
int p;
if(r==5)
{
printf("\nQueue is full");
getch();
}
else
{
printf("\nEnter the no u want to insert:");
scanf("%d",&p);
r=r+1;
qu[r]=p;
}
}


dlete()
{
if(f==r)
{
printf("\nQueue is empty");
getch();
}
else
{
f=f+1;
printf("\nthe delete element is :%d",qu[f]);
getch();
}
}


view()
{
int i;
if(r==f)
{
printf("\nQueue is empty");
getch();
}
else
{
printf("\nThe Elements in the Queue are:\n");
for(i=f+1;i<=r;i++)
printf("\n%d",qu[i]);
getch();
}
}