#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	  char i;
	  clrscr();
	  cout<<endl<<"enter the value";
	  cin>>i;
	  if((i>='a'&& i<='z') ||(i>='A'&& i<='Z'))
	  {
	  cout<<endl<<"the value is alphabet";
	  }
	  else if(i>='0' && i<='9')
	  {
	  cout<<endl<<"the value is number";
	  }
	  else
	  {
	  cout<<"the value is special character";
	  }
	  getch();
	  return 0;
	  }