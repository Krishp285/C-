#include<iostream.h>
#include<conio.h>
void main(){
	   int i,no,dc=0,sum=0,m=0,temp=0,dup=0;
	   clrscr();
	   cout<<"\nenter the number ";
	   cin>>no;
	   dup=no;
	   for(;no>0;)
	   {
		      no=no/10;
		      dc++;
	   }
	   cout<<"\nthe digit of number is :- "<<dc;
	   no=dup;
	   for(;no>0;)
	   {
		temp=no%10;
		if(dc==1)
		{
		m=(temp);
		}
		else if(dc==2)
		{
		m=(temp*temp);
		}
		else if(dc==3)
		{
		m=(temp*temp*temp);
		}
		if(dc==4)
		{
		m=(temp*temp*temp*temp);
		}
		else if(dc==5)
		{
		m=(temp*temp*temp*temp*temp);
		}
		else
		{
		break;
		}
		sum=sum+m;
	   }
	   if(sum==no)
	   {
	   cout<<"\nthe number is armstrong "<<dup;
	   }
	   else
	   {
	   cout<<"\nthe number is not  armstrong "<<dup;
	   }
	   getch();
	}
