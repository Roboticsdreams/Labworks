#include<iostream.h>
#include<conio.h>
class student
{
char name[30],dob[30],bg[10],fn[10],add[10],cn[30],un[30],hb[10],qa[10];
public:
	void getdata(void);
	void putdata(void);
};
void  student::getdata(void)
{
cout<<"\nEnter the name:";
cin>>name;
cout<<"\nEnter the DOB:";
cin>>dob;
cout<<"\nEnter the Bloodgroup: ";
cin>>bg;
cout<<"\nEnter the father name:";
cin>>fn;
cout<<"\nEnter the address:";
cin>>add;
cout<<"\nEnter the Qualification:";
cin>>qa;
cout<<"\nEnter the college name:";
cin>>cn;
cout<<"\nEnter the university name:";
cin>>un;
cout<<"\nEnter the hobbies:";
cin>>hb;
}
void student::putdata(void)
{
cout<<"\n STUDENT PERSONAL DETAILS";
cout<<"\nName:"<<name;
cout<<"\nDOB:"<<dob;
cout<<"\nBloodGroup:"<<bg;
cout<<"\nFathername:"<<fn;
cout<<"\nAddress:"<<add;
cout<<"\nQualification:"<<qa;
cout<<"\nCollegename:"<<cn;
cout<<"\nUniversityname:"<<un;
cout<<"\nHobbies:"<<hb;
}

void main()
{
int i;
clrscr();
student x[2];
cout<<"\nEnter the 2 Personal Details:";
for(i=1;i<=2;i++)
x[i].getdata();
for(i=1;i<=2;i++)
x[i].putdata();
getch();
}
