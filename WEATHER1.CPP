#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	int a;
	clrscr();
	cout<<endl<<"\nenter the weather in(degree c)";
	cin>>a;
	if(a<0)
	{
	cout<<endl<<"freezing weather";
	}
	if(a>0 && a<10)
	{
	cout<<endl<<"very cold weather";
	}
	if(a>10 && a<20)
	{
	cout<<endl<<"cold weather";
	}
	if(a>20 && a<30)
	{
	cout<<endl<<"normal weather";
	}
	if(a>30 && a<40)
	{
	cout<<endl<<"hot weather";
	}
	if(a>=40)
	{
	cout<<endl<<"very hot weather";
	}
	getch();
	return 0;
}