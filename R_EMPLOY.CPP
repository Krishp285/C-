#include<iostream.h>
#include<conio.h>
#define SIZE 1
struct employees
{
	int salary,pday,id,tday;
	char name[30],org[30],desig[30];

}s[SIZE];
void main(){
	int i,days;
	clrscr();
	for(i=1;i<=SIZE;i++){
	cout<<"\nenter the name of employee :- ";
	cin>>s[i].name;
	cout<<"\nenter the employee id :- ";
	cin>>s[i].id;
	cout<<"\nenter the organization name :- ";
	cin>>s[i].org;
	cout<<"\nenter the designation :- ";
	cin>>s[i].desig;
	cout<<"\nenter the p days :- ";
	cin>>s[i].pday;
	days = s[i].pday;
	while(days>6)
	{

	s[i].pday++;
	days-=6;


	}

	s[i].salary = 500 * s[i].pday ;



	}

	cout<<"\nname\tid\torgname\tdesignation\tpresent days\tsalary\n";
	for(i=1;i<=SIZE;i++)
	{
		cout<<"\n"<<s[i].name<<"\t"<<s[i].id<<"\t"<<s[i].org<<"\t\t"<<s[i].desig<<"\t\t"<<s[i].pday<<"\t"<<s[i].salary<<"$";

	}
	getch();
	}