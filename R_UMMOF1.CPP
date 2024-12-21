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
	//unary(member) operator overloading function
	void operator -()
	{
		no1=-no1;
	}

};
void main()
{
	Calc c1;
	clrscr();

	c1.display();
	-c1;
	c1.display();

	getch();
}