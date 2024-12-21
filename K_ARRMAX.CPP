#include<iostream.h>
#include<conio.h>
void main(){
	int i,no;
	int a[5];
	clrscr();
	for(i=1;i<=5;i++)
	{
	cout<<"\nenter the number  :-";
	cin>>a[i];
	}

	for(i=1;i<=5;i++)
	{
	       if(a[1] < a[i])
	       {
		a[1]= a[i];

	       }
	}

	cout<<"\nmax no is :- "<<a[1];
	getch();
	}