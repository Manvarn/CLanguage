#include<stdio.h>
#include<conio.h>
void main()
{
	float l1,l2,square;
	clrscr();
	printf("\n enter l1:");
	scanf("%f",&l1);
	printf("\n enter l2:");
	scanf("%f",&l2);

	square=l1*l2;
	printf("\n value l1: %f",l1);
	printf("\n value l2: %f",l2);
	printf("\n l1*l2: %f",square);
	getch();
}