		/*infix to postfix*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char s1[20],s2[20],st[20];
int i,j,k=0,m=0,n;
clrscr();
printf("\nEnter the Expression:");
scanf("%s",&s1);
for(i=0;i<s1[i];i++)
{
switch(s1[i])
{
case '+':
case '-':
case '*':
case '/':
case '^':
case '%':
case '~':
case '(':
while(1)
{
if(k>0)
{
if(s1[i]=='(')
break;
if((prior(s1[i]))<=(prior(st[k])))
s2[m++]=st[k--];
else
break;
}
else
break;
}
st[++k]=s1[i];
break;
case ')':
	while(1)
	{
	if(st[k]=='(')
	{
	k--;
	break;
	}
	s2[m++]=st[k--];
	}
	default:
	if(s1[i]!=')')
	s2[m++]=s1[i];
	}
}
while(k>0)
s2[m++]=st[k--];
s2[m]='\0';
clrscr();
printf("\nThe infix form of expression:");
printf("\n\t\t%s",s1);
printf("\nThe postfix form of expression:");
printf("\n\t\t%s",s2);
getch();
}

int prior(char f)
{
int i;
switch(f)
{
case '(':
	i=0;
	break;
case '=':
	i=1;
	break;
case '+':
case '-':
	i=2;
	break;
case '*':
case '/':
	i=3;
	break;
case '^':
	i=4;
	break;
}
return(i);
}
