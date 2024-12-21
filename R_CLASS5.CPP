//inline to low performance of app
#include<iostream.h>
#include<conio.h>
class Student
{
private:
	int rno;
	int std;
	char name[30];

public:
	inline void scan();
	inline void disp();
};

inline void Student :: scan()
{
	cout<<"\nenter r.no :-";
	cin>>rno;
	cout<<"\nenter name :-";
	cin>>name;
	cout<<"\nenter std :-";
	cin>>std;

}

inline void Student :: disp()
{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
}
void main()
{
	int i;
	Student s[5];
	clrscr();

	for(i=1;i<=5;i++)
	{
		s[i].scan();
	}
	for(i=1;i<=5;i++)
	{
		s[i].disp();
	}
	getch();
}