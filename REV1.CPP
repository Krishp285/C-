#include<iostream.h>
#include<conio.h>
void main(){
	int no,temp=0,i,flag=1,rev=0;
	clrscr();
	cout<<"\nenter the number :-";
	cin>>no;
	for(;no>0;)
	{
		  temp=no%10;
		  flag=1;
		  for(i=2;i<temp;i++)
		  {
		  if(temp%i==0)
		  {
			flag=0;
			break;
		  }

		  }
		  if(flag)
		  {
			 rev=(rev*10)+temp;
		  }
		    no=no/10;
	}
	cout<<"\nno is "<<rev ;
	getch();
}