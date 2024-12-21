#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],temp,no,j;
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\nenter the value of a[%d] :- ",i);
	scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
	printf("%d\t",a[i]);
	}

	printf("\nenter the number to search ;-");
	scanf("%d",&no);

	for(i=0;i<4;i++)
	{
		if(a[i] == no)
		{
			a[i+1] = a[i];
			break;
		}
		else
		{
		continue;
		}

	}
	for(i=0;i<5;i++)
	{
	printf("%d\t",a[i]);
	}
	getch();
}
/*
void main()
{
	int i,a[5],temp,j;
	clrscr();
	for(i=0;i<5;i++)
	{
	printf("\nenter the value of a[%d] :- ",i);
	scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
	printf("%d\t",a[i]);
	}
	getch();
}
*/