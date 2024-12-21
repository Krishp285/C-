#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
private:
	int rno;
	char name[30];
	int std;
public:
	Student()
	{
		cout<<"\nstart:default constructor----"<<this;
		rno=1;
		strcpy(name,"patel");
		std=12;
		cout<<"\nexit:default constructor----"<<this;
	}

	~Student()
	{
		cout<<"\nstart: destructor----"<<this;

	}
	void display()
	{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"----"<<this;
	}
};

void main(){
	clrscr();
	Student s1,s2,s3;

	s1.display();
	s2.display();
	s3.display();
	getch();
	}