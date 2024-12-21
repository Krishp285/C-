#include<iostream.h>
#include<conio.h>
void main(){
	char i;
	clrscr();
	cout<<"\nenter the letter :-";
	cin>>i;
	if(i>= 'A' || i<= 'Z')
	{
	cout<<"\nthe letter is in upper case";
	}
	else
	{
	cout<<"\nthe letter is in lower case";
	}
	getch();
	}