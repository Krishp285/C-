#include<iostream.h>
#include<conio.h>
class Vehicle
{
public:
	void getspec()
	{
	cout<<"\nvehicle :: general specification";
	}
};

class Twvehicle   : public Vehicle
{
public:
	void getspec()
	{
	cout<<"\nTwvehicle : specification";
	}
};
class Lmvvehicle : public Vehicle
{
public:
	void getspec()
	{
	cout<<"\nLmvvehicle :: general specification";
	}
};
class Hmvvehicle : public Vehicle
{
public:
	void getspec()
	{
	cout<<"\nhmvvehicle :: general specification";
	}
};

void main()
{
	int choice;
	clrscr();
	cout<<"\n1 for tw vehicle";
	cout<<"\n1 for lmv vehicle";
	cout<<"\n3 for hmv vehicle";
	cout<<"\nenter the choice :-";
	cin>>choice;
	switch(choice)
	{
	case 1:Twvehicle Tw;
		Tw.getspec();
		break;

	case 2:Lmvvehicle Lmv;
		Lmv.getspec();
		break;
	case 3:Hmvvehicle Hmv;
	       Hmv.getspec();
		break;
	}
	getch();
	}