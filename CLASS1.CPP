#include<iostream.h>
#include<conio.h>
#include<string.h>
class student  //CLASS DEFINES AS CLASS _______
{
 public: // PUBLIC/PRIVATE SCOPE
	//PUBLIC CLASS -----> RUN IN MAIN
	//PRIVATE---> RUN IN CLASS ONLY
	int rno;
	char name[20];
	int std;
};

void main(){
	student s; //CLASS CALL AS _____ S

	clrscr();

	s.rno = 1;
	strcpy(s.name ,"krish");
	s.std = 12;


	cout<<"\nrno :-"<<s.rno;
	cout<<"\ns.name :-"<<s.name;
	cout<<"\nstd :-"<<s.std;
	getch();
	}