			/*Stackoperation*/
#include<stdio.h>
#include<conio.h>
int st[5],sp;
main()
{
int n=1,ch,i;
clrscr();
printf("\n\t\tStackoperation");

do
{
printf("\n\t\t\tMenu");
printf("\n1.Push");
printf("\n2.pop");
printf("\n3.view");
printf("\n4.exit");
printf("\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
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


push()
{
int p;
if(sp==5)
{
printf("\nStack is full");
getch();
}
else
{
printf("\nEnter the no u want to push:");
scanf("%d",&p);
sp=sp+1;
st[sp]=p;
}
}


pop()
{
if(sp==0)
{
printf("\nStack is empty");
getch();
}
else
{
printf("\nthe delete element is :%d",st[sp]);
sp=sp-1;
getch();
}
}


view()
{
int i;
if(sp==0)
{
printf("\nStack is empty");
getch();
}
else
{
printf("\nThe Elements in the Stack are:\n");
for(i=sp;i>0;i--)
printf("\n%d",st[i]);
getch();
}
}