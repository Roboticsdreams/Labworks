
			/*Decimal to any base*/
#include<stdio.h>
#include<conio.h>
main()
{
int i,a[50],bin(),oct(),hex();
clrscr();
printf("\nEnter the number:");
scanf("%d",&i);
bin(i,a);
oct(i,a);
hex(i,a);
getch();
}


bin(m,b)
int m,b[50];
{
int i=0,l;
do
{
b[i]=m%2;
m=m/2;
i++;
}
while(m>0);
l=i-1;
printf("\nThe binary value is:");
for(i=l;i>=0;i--)
printf("%d",b[i]);
}


oct(m,b)
int m,b[50];
{
int i=0,l;
do
{
b[i]=m%8;
m=m/8;
i++;
}
while(m>0);
l=i-1;
printf("\nThe octal value is:");
for(i=l;i>=0;i--)
printf("%d",b[i]);
}


hex(m,b)
int m,b[50];
{
int i=0,l;
char hd[50];
do
{
b[i]=m%16;
m=m/16;
if(b[i]==0)hd[i]='0';
else if(b[i]==1)hd[i]='1';
else if(b[i]==2)hd[i]='2';
else if(b[i]==3)hd[i]='3';
else if(b[i]==4)hd[i]='4';
else if(b[i]==5)hd[i]='5';
else if(b[i]==6)hd[i]='6';
else if(b[i]==7)hd[i]='7';
else if(b[i]==8)hd[i]='8';
else if(b[i]==9)hd[i]='9';
else if(b[i]==10)hd[i]='A';
else if(b[i]==11)hd[i]='B';
else if(b[i]==12)hd[i]='C';
else if(b[i]==13)hd[i]='D';
else if(b[i]==14)hd[i]='E';
else if(b[i]==15)hd[i]='F';
i++;
}
while(m>0);
l=i-1;
printf("\nThe hexadecimal value is:");
for(i=l;i>=0;i--)
printf("%c",hd[i]);
}