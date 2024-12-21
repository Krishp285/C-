#include<iostream.h>
#include<conio.h>
//run time polymorphism
class Vehicle
{
public:
	void getspec()
	{
	cout<<"\ngetspec";
	}
};

class twVehicle :public Vehicle
{
public:
	void getspec()
	{
	cout<<"\ntw getspec";
	}
};

class lmvVehicle:public Vehicle
{
public:
	void getspec()
	{
	cout<<"\nlmvgetspec";
	}
};

class hmvVehicle:public Vehicle
{
public:
	void getspec()
	{
	cout<<"\nhmvgetspec";
	}
};
void main(){
	int choice;
	clrscr();
	cout<<"\n1 for tw vehicle";
	cout<<"\n2 for lmv vehicle";
	cout<<"\n3 for hmv vehicle";
	cout<<"enter the choice:- ";
	cin>>choice;
	switch(choice)
	{
	case 1: twVehicle tw;
		tw.getspec();
		break;
	case 2:lmvVehicle lmv;
		tw.getspec();
		break;
	case 3: hmvVehicle hmv;
		hmv.getspec();
		break;
	}
	getch();
}