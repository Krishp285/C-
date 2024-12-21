#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
	int a[]= {2,3,123,456,2};
	int i,j,k,flag=1,l,m,temp,sum=0,no,dup;
	clrscr();

	for(i=0;i<5;i++)
	{
		no = a[i];
		if(no>99)
		{
			sum = 0;
			dup = no;
			dup = dup/10;
			while(dup>9)
			{

			temp=dup%10;
			sum=sum+temp;
			dup=dup/10;
			}
			a[i]=sum;
	}
	else
	{
		no = a[i];
		no++;
		cout<<"\nA["<<i<<"} : "<<a[i];
		for(j=3;j>1;)
		{
			    flag=1;


			for(k=2;k<no;k++)
			{
				if(no%k==0)
				{
					  flag=0;
					  break;
				}

			}
			if(flag)
			{
				cout<<"--"<<no;
				if(j=1)
				{
					a[i] = no;
				}
				j--;
			}
			no++;
		}

		cout<<"\n";
	}
	}
	for(i=0;i<5;i++)
	{
		cout<<"\n--A["<<i<<"] : "<<a[i];
	}

	getch();
	}