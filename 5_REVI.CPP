#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	int no1,no2;
public:
	void scan(int no1,int no2)
	{
	this->no1=no1;
	this->no2=no2;
	}
	void display()
	{
	cout<<"\nno1:-"<<no1<<"\tno2:-"<<no2;
	}
     friend void swap(Calc &c);
};
void swap(Calc &c)
{
int temp;
temp = c.no1;
c.no1 = c.no2;
c.no2 = temp;
}
void main()
{
Calc c1;
clrscr();

c1.scan(10,20);
c1.display();
swap(c1);

cout<<"\nafter swapping";

c1.display();
getch();
}