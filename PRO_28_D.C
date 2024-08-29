#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n enter the value a:");
	scanf("\n%d",&a);

	if(a%15==0)
	{
		printf("\na(%d) is divisble...",a);
	}
	else
	{
		printf("\na(%d) is not divisble...",a);
	}
	getch();
}
