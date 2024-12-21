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
	//dm --> set
	void setdata(int rno,char name[],int std)
	{
	//left dm /right side --> local variables
	      this->rno = rno;
	      strcpy(this->name,name);
	      this->std = std;
	}
	void displaydata()
	{
	cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
	}
};
void main(){

	Student s;
	clrscr();

	s.setdata(1,"krishpatel",12);

	s.displaydata();
	getch();
	}