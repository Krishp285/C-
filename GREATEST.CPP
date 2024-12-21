#include<iostream.h>
#include<conio.h>
void main(){
	int no1,no2,no3;
	clrscr();
	cout<<"\nenter the number 1:-";
	cin>>no1;
	cout<<"\nenter the number 2:-";
	cin>>no2;
	cout<<"\nenter the number 3:-";
	cin>>no3;
	if(no1>no2 && no2>no3)
	{
	cout<<"\nthe greatest number is "<<no1;
	}
	else if(no2>no3 && no3>no1)
	{
	cout<<"\nthe greatest number is "<<no2;
	}
	else
	{
	cout<<"\nthe greatest number is "<<no3;
	}

	getch();
	}