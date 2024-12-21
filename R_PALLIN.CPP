#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main(){
	char name[30];
	int len=0,i,flag=1,j;
	clrscr();
	cout<<"\nenter the string ";
	cin>>name;
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	for(i=0,j=(len-1);i<len;i++,j--)
	{
		if(name[i] != name[j])
		{
				    flag = 0;
				    break;
		}

	}
	if(flag)
	{
	cout<<"\nname is pallindrone ";
	}
	else
	{
	cout<<"\nname is not pallindrone ";
	}
	getch();
	}