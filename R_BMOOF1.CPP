#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	 int no1;
public:
	Calc()
	{
	no1 = 10;
	}
	void display()
	{
	cout<<"\n"<<this<<"no1--->"<<no1;
	}
	//binary(member) operator overloading function
	Calc  operator +(Calc &c2)
	{
		Calc temp(0);
		temp.no1 = no1 + c2.no1;
		return temp;
	}

};
void main()
{
	Calc c1(10),c2(20),c3(0);
	clrscr();

	c1.display();
	c2.display();
	c3.display();
	c3 = c1 + c2;


	cout<<"\nafter binary operator";
	c3.display();
	getch();
}