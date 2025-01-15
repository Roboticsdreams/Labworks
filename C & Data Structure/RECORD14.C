			/*linked list*/
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int data;
struct node *next;
}*first,*last;
void main()
{
int ch;
void create(void);
void append(void);
void display(void);
clrscr();
first=NULL;
do
{
printf("\n1.create the list:");
printf("\n2.insert the data at the end:");
printf("\n3.display the list:");
printf("\npress any key to stop");
printf("\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
	create();
	break;
case 2:
	append();
	break;
case 3:
	display();
	break;
default:
	exit(0);
	break;
}
}
while(1);
}

void create(void)
{
struct node *temp;
int n,i;
printf("\nEnter the no off node in the list:");
scanf("%d",&n);
printf("\nEnter the data one by one:");
for(i=0;i<n;i++)
{
temp=(struct node*)malloc(sizeof(struct node));
scanf("%d", &temp->data);
temp->next=NULL;
if(first==NULL)
{
first=temp;
last=temp;
}
else
{
last->next=temp;
last=temp;
}
}
getch();
}

void append(void)
{
struct node *temp;
printf("\nEnter the no to be insert at the end:");
temp=(struct node*)malloc(sizeof(struct node));
scanf("%d",&temp->data);
temp->next=NULL;
if(first==NULL)
{
first=temp;
last=temp;
}
else
{
last->next=temp;
last=temp;
}
}

void display(void)
{
struct node *q;
q=first;
if(q==NULL)
{
printf("\nList is empty");
getch();
}
else
{
printf("\nElements in the linked list are:\n");
while(q!=0)
{
printf("\n%d",q->data);
q=q->next;
}
getch();
}
}


