		/*EB BILL*/
#include<iostream.h>
#include<conio.h>
class eb
{
char n[30],add[30],date[30],sn[10];
float pr,cr,tot,amt;
public:
	void get();
	void calc();
};
void eb::get()
{
cout<<"\nEnter the name:";
cin>>n;
cout<<"\nenter the service no:";
cin>>sn;
cout<<"\nEnter the address:";
cin>>add;
cout<<"\nEnter the date:";
cin>>date;
cout<<"\nEnter the current reading:";
cin>>cr;
cout<<"\nEnter the previous reading:";
cin>>pr;
}
void eb::calc()
{
tot=cr-pr;
if(pr>cr)
{
cout<<"Invalid Reading";
goto l;
}
else
{
if(tot<=50)
amt=tot*0.75;
else if(tot<=100)
amt=(50*0.75)+(tot-50)*0.85;
else if(tot<=200)
amt=(50*0.75)+(50*0.85)+(tot-100)*1.5;
else if(tot<=300)
amt=(50*0.75)+(50*0.85)+(100*1.5)+(tot-200)*2.2;
else if(tot>300)
amt=(50*0.75)+(50*0.85)+(100*1.5)+(100*2.2)+(tot-300)*3;
cout<<"\t\tElectricity Bill";
cout<<"\nName:"<<n;
cout<<"\nSevice no:"<<sn;
cout<<"\nAddress:"<<add;
cout<<"\nDate:"<<date;
cout<<"\nCurrent Reading:"<<cr;
cout<<"\nPrevois Reading:"<<pr;
cout<<"\nTotal Units:"<<tot;
cout<<"\nAmount:"<<amt;
l:
}
}
void main()
{
eb e;
clrscr();
e.get();
e.calc();
getch();
}