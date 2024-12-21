#include<iostream.h>
#include<conio.h>
class Topmanagement
{

public:
	virtual void getdata() = 0;

};
class Middlemanagement
{

public:
	virtual void getdata() = 0;

};
class Firstlinemanagement
{

public:
	virtual void getdata() = 0;

};
class Chairman : public Topmanagement
{
public:
	void getdata()
	{
	cout<<"\nChairman";

	}
};
class Vicechairman : public Topmanagement
{
public:
	void getdata()
	{
	cout<<"\nVvicechairman";
	}
};
class Boardofdirectors : public Topmanagement
{
public:
	void getdata()
	{
	cout<<"\nBoard of directors";
	}
};
class Ceo : public Topmanagement
{
public:
	void getdata()
	{
	cout<<"\nChief executive officer";
	}
};
class Generalmanager : public Middlemanagement
{
public:
	void getdata()
	{
	cout<<"\nGeneralmanager";
	}
};
class Regionalmanager : public Middlemanagement
{
public:
	void getdata()
	{
	cout<<"\nRegional manager";
	}
};
class Supervisor : public Firstlinemanagement
{
public:
	void getdata()
	{
	cout<<"\nSupervisor";
	}
};
class Officemanager : public Firstlinemanagement
{
public:
	void getdata()
	{
	cout<<"\nOffice manager";
	}
};
class Teamleader : public Firstlinemanagement
{
public:
	void getdata()
	{
	cout<<"\nTeam leader";
	}
};

void main()
{
clrscr();
int choice,choice1;
	clrscr();
	cout<<"\n1 for top management";
	cout<<"\n1 for middle management";
	cout<<"\n3 for first line management";
	cout<<"\nenter the choice :-";
	cin>>choice;
	switch(choice)
	{
	case 1:cout<<"\n1 for Chairman";
	cout<<"\n2 for Vice chaiman";
	cout<<"\n3 for Boardofdirectors";
	cout<<"\n4 for Ceo";
	cout<<"\nenter the choice :-";
	cin>>choice1;
	switch(choice1)
	{
	 case 1:Chairman c;
		c.getdata();
		break;
	 case 2:Vicechairman v;
		v.getdata();
		break;
	 case 3:Boardofdirectors b;
		b.getdata();
		break;
	 case 4:Ceo ceo;
		ceo.getdata();
		break;
	}
	break;
	case 2:cout<<"\n1 for General manager";
	cout<<"\n2 for Regional manager";
	cout<<"\nenter the choice :-";
	cin>>choice1;
	switch(choice1)
	{
	 case 1:Generalmanager g;
		g.getdata();
		break;
	 case 2:Regionalmanager r;
		r.getdata();
		break;

	}
	break;
	case 3:cout<<"\n1 for Supervisor";
	cout<<"\n2 for Office manager";
	cout<<"\n3 for Team leader";
	cout<<"\nenter the choice :-";
	cin>>choice1;
	switch(choice1)
	{
	 case 1:Supervisor s;
		s.getdata();
		break;
	 case 2:Officemanager o;
		o.getdata();
		break;
	 case 3:Teamleader t;
		t.getdata();
		break;

	}

	}
getch();

}