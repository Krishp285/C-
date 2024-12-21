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
	friend void operator -(Calc &c1)

};
	//unary(global by friend) operator overloading function
	void operator -(Calc &c1)
	{
		c1.no1=-c1.no1;
	}
void main()
{
	Calc c1;
	clrscr();

	c1.display();
	-c1;
	cout<<"\nunary(global by friend) operator overloading function";
	c1.display();

	getch();
}