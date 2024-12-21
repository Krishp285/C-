#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2;
	char choice;
	clrscr();
	cout<<"Enter The 1st No : ";
	cin>>no1;
	cout<<"Enter The 2nd No : ";
	cin>>no2;

	cout<<"\n1---- +";
	cout<<"\n2---- -";
	cout<<"\n3---- *";
	cout<<"\n4---- /";
	cout<<"\n5---Exit";
	cout<<"\nEnter Your Choice :";
	cin>>choice;
	switch(choice)
	{
		case '+':
			cout<<"Addition Is : "<<no1+no2;
			break;
		case '-':
			cout<<"Subtraction Is : "<<no1-no2;
			break;
		case '*':
			cout<<"Multiplication Is : "<<no1*no2;
			break;
		case '/':
			cout<<"Division Is : "<<no1/(float)no2;
			break;
	}

	getch();

}
