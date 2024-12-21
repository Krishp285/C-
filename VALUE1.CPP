#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
       char i;
	clrscr();
	cout<<endl<<"enter the value ";
	cin>>i;
	if((i>=65 && i<=90) ||(i>=97 && i<=124))
	{
	cout<<"the value is alphabet";
	}
	else if(i>=48 && i<=57)
	{
	cout<<"the value is number";
	}
	else
	{
	cout<<"the value special character";
	}
	getch();
	return 0;
	}