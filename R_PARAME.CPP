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
	//default constuctor
	Student()
	{
		cout<<"\nstart:default constructor----"<<this;
		rno=3;
		strcpy(name,"patel");
		std=12;
		cout<<"\nexit:default constructor----"<<this;
	}
	//parameterised constuctor
	Student(int rno,char name[],int std)
	{
	cout<<"\nstart:parameterised constructor----"<<this;
	this->rno=rno;
	strcpy(this->name,name);
	this->std=std;
	cout<<"\nexit:parameterised constructor----"<<this;
	}
	void display()
	{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std<<"----"<<this;
	}
};
void main(){
	clrscr();
	Student s1(1,"krish",12),s2(2,"k",12),s3;

	s1.display();
	s2.display();
	s3.display();
	getch();
	}