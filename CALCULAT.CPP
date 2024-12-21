#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int a,b,ans,choice;
	while(1) {
	clrscr();
	cout<<"\nenter 1 for addition :-";
	cout<<"\nenter 2 for subtraction :-";
	cout<<"\nenter 3 for multiplication :-";
	cout<<"\nenter 4 for division :-";
	cout<<"\nenter 5 for exit :-";
	cout<<"\nenter the choice :-";
	cin>>choice;
	switch(choice)
	{
		case 1:cout<<"\nenter the value of a ";
		       cin>>a;
		       cout<<"\nenter the value of b ";
		       cin>>b;
		       ans=a+b;
		       cout<<"\nthe answer is  "<<ans;
		       break;
		case 2:cout<<"\nenter the value of a ";
		       cin>>a;
		       cout<<"\nenter the value of b ";
		       cin>>b;
		       ans=a-b;
		       cout<<"\nthe answer is  "<<ans;
		       break;
		case 3:cout<<"\nenter the value of a ";
		       cin>>a;
		       cout<<"\nenter the value of b ";
		       cin>>b;
		       ans=a*b;
		       cout<<"\nthe answer is  "<<ans;
		       break;
		case 4:cout<<"\nenter the value of a ";
		       cin>>a;
		       cout<<"\nenter the value of b ";
		       cin>>b;
		       ans=a/b;
		       cout<<"\nthe answer is  "<<ans;
		       break;
		case 5:exit(0);
			break;
	}


	getch();
	}
	}