#include<iostream.h>
#include<conio.h>
class Calc
{
private:
	int no1,no2,ans;
public:
	void scan(int no1,int no2)
	{
	this->no1=no1;
	this->no2=no2;
	ans=0;
	}
	void display()
	{
	cout<<"\nno1:-"<<no1<<"no2:-"<<no2<<" ans"<<ans;
	}
	friend void add(Calc &c);
};
void add(Calc &c1)
{

   c1.ans = c1.no1 + c1.no2 ;

}

void main()
{
Calc c1;
clrscr();

c1.scan(10,20);
c1.display();
add(c1);

cout<<"\nafter adding";

c1.display();

getch();
}