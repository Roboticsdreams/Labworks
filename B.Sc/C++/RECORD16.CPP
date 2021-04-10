		/*Student Marksheet*/
#include<iostream.h>
#include<conio.h>
class student
{
public:
char name[30],rno[30],sub1[10],sub2[10],sub3[10],sub4[10],sub5[10];
int m1,m2,m3,m4,m5;
	void getsub();
	void getmark();
};
class calc:public student
{
public:
	float tot,per;
	void cal();
};
class result:public calc
{
public:
	void display();
};
void student ::getsub()
{
cout<<"\nEnter the name:";
cin>>name;
cout<<"\nEnter the rollno:";
cin>>rno;
cout<<"\nEnter the sub1 name:";
cin>>sub1;
cout<<"\nEnter the sub2 name:";
cin>>sub2;
cout<<"\nEnter the sub3 name:";
cin>>sub3;
cout<<"\nEnter the sub4 name:";
cin>>sub4;
cout<<"\nEnter the sub5 name:";
cin>>sub5;
}
void student ::getmark()
{
cout<<"\nEnter the "<<sub1<<"mark";
cin>>m1;
cout<<"\nEnter the "<<sub2<<"mark";
cin>>m2;
cout<<"\nEnter the "<<sub3<<"mark";
cin>>m3;
cout<<"\nEnter the "<<sub4<<"mark";
cin>>m4;
cout<<"\nEnter the "<<sub5<<"mark";
cin>>m5;
}
void calc::cal()
{
tot=m1+m2+m3+m4+m5;
per=tot/5;
}
void result::display()
{
clrscr();
cout<<"\n******************************************************************************";
cout<<"\n\n\t\t\tSTUDENT MARKSHEET";
cout<<"\n******************************************************************************";
cout<<"\n\nName:"<<name<<"\t\t\t\t Roll no:"<<rno<<"\n";
cout<<"\n******************************************************************************";
cout<<"\n\nSubject\t\t\tMarks\t\t\tResult\n";
cout<<"\n******************************************************************************\n";
if(m1>=40)
cout<<sub1<<"\t\t\t"<<m1<<"\t\t\t"<<"Pass\n";
else
cout<<sub1<<"\t\t\t"<<m1<<"\t\t\t"<<"Fail\n";
if(m2>=40)
cout<<sub2<<"\t\t\t"<<m2<<"\t\t\t"<<"Pass\n";
else
cout<<sub2<<"\t\t\t"<<m2<<"\t\t\t"<<"Fail\n";

if(m3>=40)
cout<<sub3<<"\t\t\t"<<m3<<"\t\t\t"<<"Pass\n";
else
cout<<sub3<<"\t\t\t"<<m3<<"\t\t\t"<<"Fail\n";

if(m4>=40)
cout<<sub4<<"\t\t\t"<<m4<<"\t\t\t"<<"Pass\n";
else
cout<<sub4<<"\t\t\t"<<m4<<"\t\t\t"<<"Fail\n";

if(m5>=40)
cout<<sub5<<"\t\t\t"<<m5<<"\t\t\t"<<"Pass\n";
else
cout<<sub5<<"\t\t\t"<<m5<<"\t\t\t"<<"Fail\n";
cout<<"\n******************************************************************************";
cout<<"\nTotal\t\t:"<<tot;
cout<<"\nPercentage\t:"<<per<<"%";
cout<<"\n******************************************************************************";
}
void main()
{
result s;
clrscr();
s.getsub();
s.getmark();
s.cal();
s.display();
getch();
}

