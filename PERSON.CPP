#include<iostream.h>
#include<conio.h>
class Person
{
public:
	virtual void getspec() = 0;

};

class School   : public Person
{
public:
	void getspec()
	{
	cout<<"\nstudent";
	}
};
class Org : public Person
{
public:
	void getspec()
	{
	cout<<"\nemployee";
	}
};
class Publicplace : public Person
{
public:
	void getspec()
	{
	cout<<"\ncitizen";
	}
};

void main()
{
	int choice;
	clrscr();
	cout<<"\n1 for school";
	cout<<"\n1 for org";
	cout<<"\n3 for public place";
	cout<<"\nenter the choice :-";
	cin>>choice;
	switch(choice)
	{
	case 1:School school;
	       school.getspec();
		break;

	case 2:Org org;
		org.getspec();
		break;
	case 3: Publicplace publicplace;
		publicplace.getspec();
		break;
	}
	getch();
	}