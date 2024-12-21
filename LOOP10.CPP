#include<iostream.h>
#include<conio.h>
void main(){
	   int i,no,temp=0,sum=0;
	   clrscr();
	   cout<<"\nenter the number ";
	   cin>>no;
	   no=no/10;
	   for(;no>9;)
	   {
		temp=no%10;
		sum=sum+temp;
		no=no/10;
	   }
	   cout<<"sum ="<<sum;

	   getch();
	}
