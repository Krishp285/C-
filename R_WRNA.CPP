#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int add();
int sub();
int mul();
int div();
void main(){
	int choice;
	while(1){
	clrscr();
	cout<<"\n1 for add";
	cout<<"\n2 for sub";
	cout<<"\n3 for mul";
	cout<<"\n4 for div";
	cout<<"\n5 for exit";
	cout<<"\nenter the choice :-";
	cin>>choice;
	switch(choice)
	{
		case 1: add();
			break;

		case 2: sub();
			break;
		case 3: mul();
			break;
		case 4: div();
			break;
		case 5:exit(0);
			break;

	}
	getch();
	}
	}
int add()
{
	int a,ans,b;
	cout<<"\nenter the va;lue of a :-";
	cin>>a;
	cout<<"\nenter the va;lue of b :-";
	cin>>b;
	ans = a+b;
	cout<<"\nthe add is "<<ans;


}
int sub()
{
	int a,ans,b;
	cout<<"\nenter the va;lue of a :-";
	cin>>a;
	cout<<"\nenter the va;lue of b :-";
	cin>>b;
	ans = a-b;
	cout<<"\nthe add is "<<ans;


}
int mul()
{
	int a,ans,b;
	cout<<"\nenter the va;lue of a :-";
	cin>>a;
	cout<<"\nenter the va;lue of b :-";
	cin>>b;
	ans = a*b;
	cout<<"\nthe add is "<<ans;


}
int div()
{
	int a,ans,b;
	cout<<"\nenter the va;lue of a :-";
	cin>>a;
	cout<<"\nenter the va;lue of b :-";
	cin>>b;
	ans = a/b;
	cout<<"\nthe add is "<<ans;


}