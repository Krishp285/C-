#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	 int x,y;
	  clrscr();
	  cout<<endl<<"enter the x coordinate";
	  cin>>x;
	   cout<<endl<<"enter the y coordinate";
	  cin>>y;
	  if(x>0 && y>0)
	  {
	   cout<<endl<<"the point lies in first quadrant";
	  }
	  else if(x<0 && y>0)
	  {
	  cout<<endl<<"the point lies in second quadrant";
	  }
	  else if(x<0 && y<0)
	  {
	   cout<<endl<<"the point lies in third quadrant";
	  }
	    else if(x>0 && y<0)
	  {
	  cout<<endl<<"the point lies in fourth quadrant";
	  }
	  else if(x==0 && y==0)
	  {
	   cout<<endl<<"the point lies on origin";
	  }
	  getch();
	  return 0;
	  }