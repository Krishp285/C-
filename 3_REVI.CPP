#include<iostream.h>
#include<conio.h>
class Student
{
private:
	char name[30];
	int rno,std;
public:
	void scan();
	void display();
};
void Student :: scan()
{
cout<<"\nenter roll no :-";
cin>>rno;
cout<<"\nenter name :-";
cin>>name;
cout<<"\nenter std :-";
cin>>std;

}
void Student :: display()
{
cout<<"\n"<<rno<<"\t"<<name<<"\t"<<rno<<"----"<<this;
}
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