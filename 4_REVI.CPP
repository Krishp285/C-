#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
private:
	int std;
	char name[30];
	int rno;
public:
	inline void setdata(const int rno,const char name[30],const int std);
	inline void display();
};
	void Student :: setdata(const int rno,const char name[30],const int std)
	{
	this->rno=rno;
	strcpy(this->name,name);
	this->std=std;
	}
	void Student :: display()
	{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"-----"<<this;
	}
void main()
{
Student s1,s2;
clrscr();


s1.setdata(1,"krish",12);

s1.display();

s2.setdata(2,"patel",12);

s2.display();
getch();
}