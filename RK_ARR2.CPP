#include<iostream.h>
#include<conio.h>
void main(){
	int a[] = {123,345,678,896,346},i,no,ldigit=0,fdigit=0;
	clrscr();

	for(i=0;i<5;i++)
	{
		       no=a[i];

			ldigit = no%10;

			while(no>9)
			{
				no = no /10;
			}


			fdigit = no;

			a[i] = ldigit + fdigit ;
	}

	for(i=0;i<5;i++)
	{
		       cout<<"\nA["<<i<<"] : "<<a[i];
	}

	getch();
	}