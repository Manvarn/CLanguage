#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n enter the value x:");
	scanf("%d",&x);
	printf("\n enter the value y:");
	scanf("%d",&y);

	if(x<2000 || x>3000)
	{
		printf("\nx(%d)",x);
	}
	if(y>100 && y<500)
	{
		printf("\ny(%d)",y);
	}
	getch();
}




