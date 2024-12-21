#include<ioSTREAM.h>
#include<conio.h>
#define SIZE 2
struct student
{
	int rollno,maths,ss,sci,per,total;
	char name[30];

}s[SIZE];
void main(){
	int i,per,total;
	clrscr();
	for(i=1;i<=SIZE;i++){
	cout<<"\nenter the name of student :- ";
	cin>>s[i].name;
	cout<<"\nenter the roll number :- ";
	cin>>s[i].rollno;
	cout<<"\nenter the marks of social science :- ";
	cin>>s[i].ss;
	cout<<"\nenter the marks of science :- ";
	cin>>s[i].sci;
	cout<<"\nenter the marks of maths :- ";
	cin>>s[i].maths;

	s[i].total = s[i].ss + s[i].sci + s[i].maths;

	s[i].per = (total/3);
	}

	cout<<"\nname\trollno\tss\tsci\tmaths\ttotal\tper\n";
	for(i=1;i<=SIZE;i++)
	{
		cout<<s[i].name<<"\t"<<s[i].rollno<<"\t"<<s[i].ss<<"\t"<<s[i].sci<<"\t"<<s[i].maths<<"\t"<<s[i].total<<"\t"<<s[i].per;
		cout<<"\n";
	}
	getch();
	}