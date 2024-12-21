#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	int no1;
public:
	Calc(int no1)
	{
		this->no1=no1;
	}
	Calc operator + (Calc &c2)
	{
		Calc temp(0);
		temp.no1=no1+c2.no1;
		return temp;
	}
	void disp()
	{
		cout<<"\nNo1 : "<<no1<<"---"<<this;
	}
};
void main()
{
	Calc c1(20),c2(10),c3(0);
	clrscr();

	c1.disp();
	c2.disp();
	c3.disp();
	c3 = c1+c2;
	cout<<"\nAfter Binary Member OOf Called: ";

	c3.disp();

	getch();
}
