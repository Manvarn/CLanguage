#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,rectangle;
	clrscr();
	printf("\n enter l:");
	scanf("%f",&l);
	printf("\n enter b:");
	scanf("%f",&b);

	rectangle=l*b;
	printf("\n value l: %f",l);
	printf("\n value b: %f",b);
	printf("\n l*b: %f",rectangle);
	getch();
}