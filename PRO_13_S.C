#include<stdio.h>
#include<conio.h>
void main()
{
	float pie,r1,r2,circle;
	clrscr();
	printf("\n enter pie:");
	scanf("%f",&pie);
	printf("\n enter r1:");
	scanf("%f",&r1);
	printf("\n enter r2:");
	scanf("%f",&r2);

	circle=pie*r1*r2;
	printf("\n value pie: %f",pie);
	printf("\n value r1: %f",r1);
	printf("\n value r2: %f",r2);
	printf("\n pie*r1*r2: %f",circle);
	getch();
}