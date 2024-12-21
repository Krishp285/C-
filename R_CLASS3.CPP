
#include<iostream.h>
#include<conio.h>
class Product
{
private:
	int id,price,quantity,bill;
	char pname[30],bname[30],sname[30];

public:
	void scandata()
	{
		cout<<"\nenter the product id :-";
		cin>>id;
		cout<<"\nenter the price :-";
		cin>>price;
		cout<<"\nenter the quantity :-";
		cin>>quantity;
		cout<<"\nenter product name :-";
		cin>>pname;
		cout<<"\nenter buyer name :-";
		cin>>bname;
		cout<<"\nenter seller name :-";
		cin>>sname;

		bill = quantity * price;
	}


	void displaydata()
	{
		cout<<"\n"<<id<<"\t"<<pname<<"\t"<<price<<"\t"<<quantity<<"\t"<<bill<<"\t"<<bname<<"\t"<<sname;
	}

}s[5];
void main()
{
	int i;
	clrscr();

	for(i=1;i<=5;i++)
	{
	s[i].scandata();
	}

	cout<<"\nid\tpname\tprice\tquantity\tbill\tbname\tsname";

	for(i=1;i<=5;i++)
	{
	s[i].displaydata();
	}
	getch();
}