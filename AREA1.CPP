
#include<iostream.h>
#include<conio.h>
#include<process.h>
int main(){
	int i,a,choice,area1,area2,b,c,d,e,f,area3;
	float pi=3.14,area;
	clrscr();
	cout<<"1 for circle";
	cout<<endl<<"2 for square";
	cout<<endl<<"3 for rectangle";
	cout<<endl<<"4 for triangle";
	cout<<endl<<"enter the choice";
	cin>>choice;
	switch(choice)
	{
	case 1:  cout<<endl<<"enter the radius";
		 cin>>a;
		 area= pi*a;
		 cout<<endl<<"the area of circle is "<<area;
		 break;
	case 2:   cout<<endl<<"enter the length";
		 cin>>c;
		 area1=c*c;
		  cout<<endl<<"the area of circle is"<<area1;
		 break;
	case 3:   cout<<endl<<"enter the length";
		 cin>>d;
		  cout<<endl<<"enter the breadth";
		 cin>>e;
		 area2=b*c;
		  cout<<endl<<"the area of rectangle is"<<area2;
		 break;
	case 4:   cout<<endl<<"enter the length";
		 cin>>f;
		  cout<<endl<<"enter the breadth";
		 cin>>b;
		 area3=(b*f)/2;
		  cout<<endl<<"the area of circle is"<<area3;
		 break;
	}
	getch();
	return 0;

}