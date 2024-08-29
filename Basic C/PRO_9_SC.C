#include<stdio.h>
#include<conio.h>
void main()
{
	float doller,rupee,total;
	clrscr();
	printf("\n doller:");
	scanf("%f",&doller);
	printf("\n rupee:");
	scanf("%f",&rupee);

	total=doller*rupee;
	printf("\n doller*rupee: %f",total);
	getch();
}