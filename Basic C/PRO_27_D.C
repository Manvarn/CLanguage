#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("enter the value x:");
	scanf("\n%d",&x);

	if(x%5==0)
	{
		printf("\nx(%d) is divisble...",x);
	}
	else
	{
		printf("\nx(%d) is not divisble...",x);
	}
	getch();
}








