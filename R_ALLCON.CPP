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
	Student();
	Student(int rno,char name[],int std);
	Student(Student &s);
	void display();

};
Student::Student()
	{
		cout<<"\nstart:default constructor----"<<this;
		rno=3;
		strcpy(name,"patel");
		std=12;
		cout<<"\nexit:default constructor----"<<this;
	}

	//parameterised constuctor

	Student::Student(int rno,char name[],int std)
	{
	cout<<"\nstart:parameterised constructor----"<<this;
	this->rno=rno;
	strcpy(this->name,name);
	this->std=std;
	cout<<"\nexit:parameterised constructor----"<<this;
	}

	Student::Student(Student &s)
	{
	cout<<"\nstart:copy constructor----"<<this;
	this->rno=s.rno;
	strcpy(this->name,s.name);
	this->std=s.std;
	cout<<"\nexit:copy constructor----"<<this;
	}
	void Student::display()
	{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"----"<<this;
	}
void main(){
	clrscr();
	Student s1(1,"krish",12),s2(2,"k",12),s3;

	s1.display();
	s2.display();
	s3.display();
	Student s4(s1);
	s4.display();
	getch();
	}