#include<iostream.h>
#include<conio.h>
class A
{
public:
       void setdata(int value)
       {
       cout<<"\nprinting value :-"<<value;
       }
       void setdata(double value)
       {
       cout<<"\nprinting value :-"<<value;
       }
};

void main()
{
	A obj;
	clrscr();
	obj.setdata(42);
	obj.setdata(42.11);


	getch();
}