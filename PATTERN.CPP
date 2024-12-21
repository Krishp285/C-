#include<iostream.h>
#include<conio.h>
#include<process.h>
#define SIZE 5

void main()
{
	int i,j,k;
	int choice;

	while(1){
	clrscr();

	cout<<endl<<"1.Right Half";
	cout<<"\n2.Left Half";
	cout<<"\n3.Inverted Left Half";
	cout<<"\n4.Inverted Right Half";
	cout<<"\n5.Upper Diamond";
	cout<<"\n6.Upper Diamond";
	cout<<"\n7.Full Diamond";
	cout<<"\n8.Exit";


	cout<<"\nEnter the choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1: for(i=1;i<=SIZE;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
			break;

		case 2: for(i=1;i<=SIZE;i++)
			{
				for(k=(SIZE-i);k>=1;k--)
				{
					cout<<" ";
				}

				for(j=1;j<=i;j++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
			break;

		case 3: for(i=SIZE;i>=1;i--)
			{
				for(k=(SIZE-i);k>=1;k--)
				{
					cout<<" ";
				}

				for(j=i;j>=1;j--)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
			break;

		case 4: for(i=SIZE;i>=1;i--)
			{

				for(j=1;j<=i;j++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
			break;

		case 5: for(i=1;i<=SIZE;i++)
			{
				for(k=(SIZE-i);k>=1;k--)
				{
					cout<<" ";
				}

				for(j=1;j<=i;j++)
				{
					cout<<"* ";
				}
				cout<<"\n";
			}
			break;

		case 6: for(i=SIZE;i>=1;i--)
			{
				for(k=(SIZE-i);k>=1;k--)
				{
					cout<<" ";
				}

				for(j=1;j<=i;j++)
				{
					cout<<"* ";
				}
				cout<<"\n";
			}
			break;

		case 7: for(i=1;i<=SIZE;i++)
			{
				for(k=(SIZE-i);k>=1;k--)
				{
					cout<<" ";
				}

				for(j=1;j<=i;j++)
				{
					cout<<"* ";
				}
				cout<<"\n";
			}
			for(i=SIZE-1;i>=1;i--)
			{
				for(k=(SIZE-i);k>=1;k--)
				{
					cout<<" ";
				}

				for(j=1;j<=i;j++)
				{
					cout<<"* ";
				}
				cout<<"\n";
			}
			break;

		case 8: exit(0);
	}//end of switch
	getch();
	}//end of while
}//end of main