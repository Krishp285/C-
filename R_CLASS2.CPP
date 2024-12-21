#include<iostream.h>
#include<conio.h>
//class property = dm +mf
//private-- within class
class student
{
private:
	//1) data member(dm)--instance variables
	int rno,std;
	char name[30];

public:
	//member function -- function(js) --- --- class ---method
	void scandata()
	{
		cout<<"\nenter roll no :-";
		cin>>rno;
		cout<<"\nenter name:-";
		cin>>name;
		cout<<"\nenter std :-";
		cin>>std;
	}
	void displaydata()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
};
void main()
{
	student s[5];
	int i;
	clrscr();

	for(i=0;i<5;i++)
	{
	s[i].scandata();
	}

	for(i=0;i<5;i++)
	{
	s[i].displaydata();
	}

	//s1.scandata();
	//s2.scandata();
	//s3.scandata();
	//s4.scandata();
	//s5.scandata();
	//s1.displaydata();
	//s2.displaydata();
	//s3.displaydata();
	//s4.displaydata();
	//s5.displaydata();

	getch();
}
