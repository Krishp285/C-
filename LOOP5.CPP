#include<iostream.h>
#include<conio.h>
void main(){
	int i,j,dup,k,no,sum=0,temp=0;
	clrscr();
	cout<<"\nenteer the number :-";
	cin>>no;
	dup=no;
	for(;no>0;)
	{
		temp=no%10;
		sum=sum + temp;
		no=no/10;

	}
	cout<<"\nthe addition of number "<<dup<<"is"<<sum;
	getch();
	}