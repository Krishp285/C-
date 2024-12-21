#include<iostream.h>
#include<conio.h>
void main(){
	int i,j,k,no;
	clrscr();
	cout<<"\nenteer the number :-";
	cin>>no;
	for(i=2;i<no;i++)
	{
		if(no%i!=0)
		{
		  cout<<"\n"<<no<<" is prime number";

		}
		else{
			  cout<<"\n"<<no<<" is composite number";
			  break;
		}
	}

	getch();
	}