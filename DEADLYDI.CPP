#include<iostream.h>
#include<conio.h>
class A
{
public:
       int no1;
};
class B : public virtual A
{
public:
       int no2;
};
class C :public virtual A
{
public:
       int no3;
};
class D : public B,public C
{
public:
       int no4;
};
void main()
{
	D obj;
	clrscr();
	obj.no1 = 10;
	cout<<"\nno1 is "<<obj.no1;
	getch();
}