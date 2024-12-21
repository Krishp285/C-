#include<iostream.h>
#include<conio.h>
void main(){
	int i;
	clrscr();
	for(i=1;i<=50;i++)
	{
	cout<<"\t"<<i;
	}
	cout<<"\n";
	i=1;
	while(i<=50)
	{
		cout<<"\t"<<i;
		i++;
	}
	cout<<"\n";
	i=1;
	do
	{
		cout<<"\t"<<i;
		i++;
	}while(i<=50);
	getch();
	}