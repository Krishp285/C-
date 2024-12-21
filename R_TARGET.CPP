#include<iostream.h>
#include<conio.h>
void main(){
	int i,j,target;
	int a[5];
	clrscr();
	for(i=1;i<=5;i++)
	{
	cout<<"\nenter the number a["<<i<<"]";
	cin>>a[i];
	}
	for(i=1;i<=5;i++)
	{
	cout<<"\t"<<a[i];
	}

	cout<<"\nenter the target :-";
	cin>>target;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=5;j++)
	{
	    if(a[i] +a[j] == target)
	    {
	    cout<<"\nindex1 = "<<i<<"index2 = "<<j;
	    }
	}
	}
	getch();
	}