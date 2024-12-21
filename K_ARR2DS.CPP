#include<iostream.h>
#include<conio.h>
void main(){
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	clrscr();
	for(i=1;i<=3;i++)
	for(j=1;j<=3;j++)
	{
	{
	cout<<"\nenter the number in a :-";
	cin>>a[i][j];
	}
	}

	for(i=1;i<=3;i++)
	for(j=1;j<=3;j++)
	{
	{
	cout<<"\nenter the number in b :-";
	cin>>b[i][j];
	}
	}

	for(i=1;i<=3;i++)
	for(j=1;j<=3;j++)
	{
	{
	c[i][j] = a[i][j] + b[i][j];
	cout<<"\n"<<"\t"<<a[i][j]<<"\t+"<<"\t"<<b[i][j]<<"\t"<<c[i][j];
	}
	}


	getch();
	}