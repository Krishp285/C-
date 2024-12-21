#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int i,choice,no,sum,temp,dup,no1,no2,dc;
	while(1){
	clrscr();
	cout<<"\n1 for number";
	cout<<"\n2 for table";
	cout<<"\n3 for even number";
	cout<<"\n4 for sum of odd number";
	cout<<"\n5 for sum of number";
	cout<<"\n6 for counting digit ";
	cout<<"\n7 for exit";
	cout<<"\nenter the choice";
	cin>>choice;
	switch(choice){
	case 1: i=100;
		while(i>=1)
		{
		cout<<"\t"<<i;
		i--;
		}
		break;
	case 2: cout<<"\nenter the number of table you want :-";
		cin>>no;
		i=1;
		while(i<=10)
		{
		cout<<"\n"<<no<<"\tx\t"<<i<<"\t=\t"<<no*i;
		i++;
		}
		break;
	case 3: cout<<"\nenter the starting number :-";
		cin>>no1;
		cout<<"\nenter the ending number :-";
		cin>>no2;

		i=no1;
		while(i<=no2)
		{
			if(i%2==0)
			{
				cout<<"\t"<<i;

			}
			i++;
		}
		break;
	case 4: cout<<"\nenter the starting number :-";
		cin>>no1;
		cout<<"\nenter the ending number :-";
		cin>>no2;
		sum=0;
		i=no1;
		while(i<=no2)
		{
			if(i%2!=0)
			{
				sum=sum+i;

			}
			i++;
		}
		cout<<"\nthe sum of odd number between  "<<no1<<" and "<<no2<<" is "<<sum;
		break;
	case 5:	cout<<"\nenter the starting number :-";
		cin>>no1;
		cout<<"\nenter the ending number :-";
		cin>>no2;
		sum=0;
		i=no1;
		while(i<=no2)
		{
		sum=sum+i;
		i++;
		}
		cout<<"\nthe sum of number between  "<<no1<<" and "<<no2<<" is "<<sum;
		break;
	case 6: cout<<"\nenter the number :-";
		cin>>no;
		temp=0,dc=0;
		while(no>0)
		{
			temp=no%10;
			dc++;
			no=no/10;
		}
		cout<<"\nthe number od digit is "<<dc;
		break;
	case 7 : exit(0);
		break;
	}

	getch();
	}
	}