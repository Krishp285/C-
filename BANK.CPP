#include<iostream.h>
#include<conio.h>
class Rbibank
{
public:
	virtual void getspec() = 0;

};

class Axis   : public Rbibank
{
public:
	void getspec()
	{
	cout<<"\nroi 8";
	}
};
class Kotak : public Rbibank
{
public:
	void getspec()
	{
	cout<<"\nroi 10";
	}
};
class Sbi : public Rbibank
{
public:
	void getspec()
	{
	cout<<"\nroi 12";
	}
};

void main()
{
	int choice;
	clrscr();
	cout<<"\n1 for axis bank";
	cout<<"\n1 for kotak bank";
	cout<<"\n3 for sbi bank";
	cout<<"\nenter the choice :-";
	cin>>choice;
	switch(choice)
	{
	case 1:Axis axis;
	       axis.getspec();
		break;


	case 2: Kotak Kotak;
		Kotak.getspec();
		break;
	case 3:Sbi Sbi;
	       Sbi.getspec();
		break;
	}
	getch();
	}