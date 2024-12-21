#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	int i;
	clrscr();
	cout<<endl<<"enter the number (for days)";
	cin>>i;
	if(i==1)
	{
	cout<<endl<<"monday";
	}
	else if(i==2)
	{
	cout<<endl<<"tuesday";
	}
	else if(i==3)
	{
	cout<<endl<<"wednesday";
	}
	else if(i==4)
	{
	cout<<endl<<"thursday";
	}
	else if(i==5)
	{
	cout<<endl<<"friday";
	}
	else if(i==6)
	{
	cout<<endl<<"saturday";
	}
	else
	{
	cout<<endl<<"sunday";
	}
	getch();
	return 0;

}