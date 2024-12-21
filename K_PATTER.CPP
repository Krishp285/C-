#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main(){
	int i,j,k,choice;
	while(1){
	clrscr();
	cout<<"\n1";
	cout<<"\n2 ";
	cout<<"\n3 ";
	cout<<"\n 4 ";
	cout<<"\n5 ";
	cout<<"\n6";
	cout<<"\n7";
	cout<<"\n8 for exit";
	cout<<"\nenter the choice :- ";
	cin>>choice;
	switch(choice)
	{
		case 1:for(i=1;i<=5;i++)
		       {
			for(j=1;j<=i;j++)
			{
			       cout<<i;
			}
			cout<<"\n";
		       }
		       break;
		case 2:for(i=5;i>=1;i--)
		       {
			for(j=1;j<=i;j++)
			{
			       cout<<j;
			}
			cout<<"\n";
		       }
		       break;
		case 3:for(i=5;i>=1;i--)
		       {
			for(j=i;j>=1;j--)
			{
			       cout<<j	;
			}
			cout<<"\n";
		       }
		       break;
		case 4:
			for(i=1;i<=4;i++)
			{
			for(j=i;j<=4;j++)
			{

				cout<<j;
			}
			cout<<"\n";
			}
			break;
		case 5:
			for(i=4;i>=1;i--)
			{
			for(j=i;j>=1;j--)
			{

				cout<<j;
			}
			cout<<"\n";
			}
			break;
		case 6:
			for(i=4;i>=1;i--)
			{
			for(j=i;j<=4;j++)
			{

				cout<<j;
			}
			cout<<"\n";
			}
			break;
		case 7:
			for(i=1;i<=4;i++)
			{
			for(j=i;j>=1;j--)
			{

				cout<<j;
			}
			cout<<"\n";
			}
			break;
		case 8:exit(0);
			break;
	}

	getch();
	}
	}