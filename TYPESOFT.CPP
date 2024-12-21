#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	 int a,b,c;
	  clrscr();
	  cout<<endl<<"enter the first side of triangle";
	  cin>>a;
	   cout<<endl<<"enter the second side of triangle";
	  cin>>b;
	   cout<<endl<<"enter the third side of triangle";
	  cin>>c;
	  if(a==b && b==c && a==c)
	  {
	   cout<<endl<<"the triangle is equilateral triangle";
	  }
	  else if(a==b || b==c || c==a)
	  {
	  cout<<endl<<"the triangle is isosceles triangle";
	  }
	  else
	  {
	   cout<<endl<<"the triangle is scalene triangle";

	  }
	  getch();
	  return 0;
	  }