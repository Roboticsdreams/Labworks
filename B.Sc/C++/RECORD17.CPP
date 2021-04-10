		/*Working with Multiple files*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream fout;
fout.open("abb.cpp");
fout<<"HTML\n";
fout<<"ASP\n";
fout<<"XML\n";
fout<<"JSP\n";
fout<<"DHTML\n";
fout.close();
fout.open("exp.cpp");
fout<<"Hyper Text Markup Language\n";
fout<<"Active Server Pages\n";
fout<<"Extensible Markup Lanuage\n";
fout<<"Java Server Pages\n";
fout<<"Dynamic HTML\n";
fout.close();
const int n=80;
char line[n];
ifstream fin;
fin.open("abb.cpp");
cout<<"Contents of abbrevation file:\n";
while(fin)
{
fin.getline(line,n);
cout<<line<<endl;
}
fin.close();
fin.open("exp.cpp");
cout<<"Contents of expansion file:\n";
while(fin)
{

fin.getline(line,n);
cout<<line<<endl;
}
fin.close();
getch();
}






