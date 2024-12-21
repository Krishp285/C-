#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	int i,j,k,sum;
	clrscr();
	cout<<"enter the number 1 (angle)";
	cin>>i;
	cout<<endl<<"enter the number 2 (angle)";
	cin>>j;
	cout<<endl<<"enter the number 3 (angle)";
	cin>>k;
	sum=i+j+k;
	if(sum==180)
	{
	cout<<"the triangle is possible";
	}
	else
	{
	cout<<"the triangle is not possible";
	}
	getch();
	return 0;
	}