#include<iostream.h>
#include<conio.h>
#include<string.h>
class employees  //CLASS DEFINES AS CLASS _______
{
 public: // PUBLIC/PRIVATE SCOPE
	//PUBLIC CLASS -----> RUN IN MAIN
	//PRIVATE---> RUN IN CLASS ONLY
	int id;
	char name[20],desig[20],org[20];
};

void main(){
	employees e1,e2,e3; //CLASS CALL AS _____ S

	clrscr();

	cout<<"\nenter the name of employee :- ";
	cin>>e1.name;
	cout<<"\nenter the employee id :- ";
	cin>>e1.id;
	cout<<"\nenter the organization name :- ";
	cin>>e1.org;
	cout<<"\nenter the designation :- ";
	cin>>e1.desig;

	cout<<"\nenter the name of employee :- ";
	cin>>e2.name;
	cout<<"\nenter the employee id :- ";
	cin>>e2.id;
	cout<<"\nenter the organization name :- ";
	cin>>e2.org;
	cout<<"\nenter the designation :- ";
	cin>>e2.desig;


	cout<<"\nenter the name of employee :- ";
	cin>>e3.name;
	cout<<"\nenter the employee id :- ";
	cin>>e3.id;
	cout<<"\nenter the organization name :- ";
	cin>>e3.org;
	cout<<"\nenter the designation :- ";
	cin>>e3.desig;


	cout<<"\n\tname\tid\torgname\tdesignation\n";
	cout<<"\t"<<e1.name<<"\t"<<e1.id<<"\t"<<e1.org<<"\t"<<e1.desig<<"\n";
	cout<<"\t"<<e2.name<<"\t"<<e2.id<<"\t"<<e2.org<<"\t"<<e2.desig<<"\n";
	cout<<"\t"<<e3.name<<"\t"<<e3.id<<"\t"<<e3.org<<"\t"<<e3.desig;

	getch();
	}