#include<stdio.h>
#include<conio.h>
void main()
{
	float inch,centimeter,total;
	clrscr();
	printf("\n inch:");
	scanf("%f",&inch);
	printf("\n centimeter:");
	scanf("%f",&centimeter);

	total=inch*centimeter;
	printf("\n inch*centimeter: %f",total);
	getch();
}