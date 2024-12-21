#include<iostream.h>
#include<conio.h>

class Calc
{
public:
	void addfun()
	{

	}
	void addfun(int no1)
	{
	cout<<no1;
	}
	void addfun(int no1,int no2)
	{
	cout<<no1<<"\t"<<no2;
	}
	void addfun(int no1,int no2,int no3)
	{
	cout<<no1<<"\t"<<no2<<"\t"<<no3;
	}

};

void main(){
	 Calc c;
	 int no1=10,no2=20,no3=30;
	clrscr();
	cout<<"\nno argument :-";
	c.addfun();
	cout<<"\n1 argument :-";
	c.addfun(no1);
	cout<<"\n2 argument :-";
	c.addfun(no1,no2);
	cout<<"\n3 argument :-";
	c.addfun(no1,no2,no3);
	getch();
}