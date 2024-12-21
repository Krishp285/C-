#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int diva(int a,int b);
void main()
{
	int choice,a,b,ans;
	while(1)
	{
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
		case 1:  cout<<"\nenter the va;lue of a :-";
			cin>>a;
			cout<<"\nenter the va;lue of b :-";
			cin>>b;
			add(a,b);
			break;

		case 2: cout<<"\nenter the va;lue of a :-";
			cin>>a;
			cout<<"\nenter the va;lue of b :-";
			cin>>b;
			sub(a,b);
			break;
		case 3: cout<<"\nenter the va;lue of a :-";
			cin>>a;
			cout<<"\nenter the va;lue of b :-";
			cin>>b;
			mul(a,b);
			break;
		case 4: cout<<"\nenter the va;lue of a :-";
			cin>>a;
			cout<<"\nenter the va;lue of b :-";
			cin>>b;
			diva(a,b);
			break;
		case 5:exit(0);
			break;

	}
	}
	getch();

}
int add(int a,int b)
{
	int ans;
	ans = a+b;
	cout<<"\nthe add is "<<ans;


}
int sub(int a,int b)
{
	int ans;
	ans = a-b;
	cout<<"\nthe add is "<<ans;


}
int mul(int a,int b)
{
	int ans;
	ans = a*b;
	cout<<"\nthe mul is "<<ans;


}
int diva(int a,int b)
{
	int ans;
	ans = a/b;
	cout<<"\nthe div is "<<ans;


}