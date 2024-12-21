#include<iostream.h>
#include<conio.h>
#include<string.h>
class Employee
{
private:
	int id;
	char desig[30],org[30];
	char name[30];
public:
	void scan()
	{
	cout<<"\nenter id :";
	cin>>id;
	cout<<"\nenter name :";
	cin>>name;
	cout<<"\nenter designation :";
	cin>>desig;
	cout<<"\nenter organization :";
	cin>>org;
	}

	void display()
	{
	cout<<id<<"\t"<<name<<"\t"<<desig<<"\t"<<org<<"\n";
	}
};

void main()
{
clrscr();
int i;

class Employee s[5];
for(i=1;i<=5;i++)
{
s[i].scan();
}
for(i=1;i<=5;i++)
{
s[i].display();
}
getch();

}