#include<iostream.h>
#include<conio.h>
void main(){
	int phy,maths,chem,eng,comp,per;
	clrscr();
	cout<<"\nenter the marks of english :-";
	cin>>eng;
	cout<<"\nenter the marks of maths :-";
	cin>>maths;
	cout<<"\nenter the marks of computer :-";
	cin>>comp;
	cout<<"\nenter the marks of physics :-";
	cin>>phy;
	cout<<"\nenter the marks of chemistry :-";
	cin>>chem;
	per=(maths + eng + comp + phy + chem)/5;
	cout<<"\nthe percentage is "<<per<<"%";
	if(per>=90)
	{
	cout<<"\nthe grade is A";
	}
	else if(per>=80 && per<90)
	{
	cout<<"\nthe grade is B";
	}
	else if(per>=70 && per<80)
	{
	cout<<"\nthe grade is C";
	}
	else if(per>=60 && per<70)
	{
	cout<<"\nthe grade is D";
	}
	else
	{
	cout<<"\nbetter luck next time ";
	}
	getch();
	}