#include<iostream.h>
#include<conio.h>
class Student
{
private:
	char name[40];
	int std,rno;
public:
	inline void scan()
	{
	cout<<"\nenter the rno :-";
	cin>>rno;
	cout<<"\nenter the name :-";
	cin>>name;
	cout<<"\nenter the std :-";
	cin>>std;
	}
	inline void display()
	{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<rno<<"----"<<this;
	}
};
void main()
{
int i;
clrscr();

Student s[5];
for(i=1;i<=5;i++)
{
   s[i].scan();
}

for(i=1;i<=5;i++)
{
   s[i].display();
}
getch();
}