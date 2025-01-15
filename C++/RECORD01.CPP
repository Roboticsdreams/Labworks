		/*Palindrome*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[50],str2[50];
clrscr();
cout<<"\nEnter the string:";
cin>>str1;
strcpy(str2,str1);
strrev(str2);
if(strcmp(str1,str2)==0)
cout<<"\nThe Given String is  a Pailndrome";
else
cout<<"\nThe Given String is not a Palindrome";
getch();
}