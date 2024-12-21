#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	int i,j,a;
	clrscr();
	cout<<"input cost  price - ";
	cin>>i;
       cout<<endl<<"input selling price -";
       cin>>j;
       a=j-i;
       if (a>=0 && a<=10000)
       {
       cout<<endl<<"the input data is in profit";
       }
       else
       {
	 cout<<endl<<" the input data is not in profit";
       }
       getch();
       return 0;

       }

