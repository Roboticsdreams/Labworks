		/*Pay Bill*/
#include<iostream.h>
#include<conio.h>
class salary
{
protected:
	char name[30],eid[10];
	float bassalary;
public:
	void getdata();
};
class exper
{
protected:
	int exp;
public:
	void xper();

};
class paybill:public salary,public exper
{
protected:
	float gp,pf,np;
public:
	void calc();
	void display();
};
void salary::getdata()
{
cout<<"\nEnter the name:";
cin>>name;
cout<<"\nEnter the Eid:";
cin>>eid;
cout<<"\nEnter the Basicsalary:";
cin>>bassalary;
}
void exper::xper()
{
cout<<"\nEnter the Experience:";
cin>>exp;
}
void paybill::calc()
{
if(exp>=5)
{
gp=1000+0.3*bassalary+125;
pf=0.15*gp;
np=bassalary+(gp-pf);
}
else
{
gp=0.3*bassalary+125;
pf=0.15*gp;
np=bassalary+(gp-pf);
}
}
void paybill::display()
{
cout<<"\nEmployee Salary Details";
cout<<"\nName:"<<name;
cout<<"\nEid:"<<eid;
cout<<"\nBasicsalary:"<<bassalary;
cout<<"\nProvidentialfund:"<<pf;
cout<<"\nNetpay:"<<np;
}
void main()
{
paybill p;
clrscr();
p.getdata();
p.xper();
p.calc();
p.display();
getch();
}

