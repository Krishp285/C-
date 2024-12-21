#include<iostream.h>
#include<conio.h>
class Person
{
protected:
	  char name[30];
};
class Employee : public Person
{
private:
	int id;
	long int salary;
	char orgname[30];
	char desig[30];

public:
	void scan()
	{
		cout<<"\nenter id :-";
		cin>>id;
		cout<<"\nenter name :-";
		cin>>name;
		cout<<"\nenter salary :-";
		cin>>salary;
		cout<<"\nenter designation :-";
		cin>>desig;
		cout<<"\nenter organisation name :-";
		cin>>orgname;

	}
	void display()
	{
	cout<<"\n"<<id<<"\t"<<name<<"\t"<<orgname<<"\t"<<desig<<"\t"<<salary;
	}
};
void main()
{
	Employee e1;
	clrscr();

	e1.scan();
	e1.display();
	getch();
}
