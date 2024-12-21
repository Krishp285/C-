#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,no,remainder,riv;
	clrscr();
	cout<<"Enter a number";
	cin>>j;
	for(;j>0;)
	{
	remainder=j%10;
	for(i=2;i<remainder;i++)
	{
		if(remainder%2==0)
		break;
	}
	if(remainder==i)
	{
		riv=riv*10+remainder;


	j=j/10;
	}
	else
	{
		j=j/10;
	}
	}
	cout<<riv;



	getch();
}