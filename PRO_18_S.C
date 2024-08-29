#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,z;
	clrscr();

	printf("\n enter a:");
	scanf("%f",&a);
	printf("\n enter b:");
	scanf("%f",&b);

	z=a+b;
	printf("\n value a: %f",a);
	printf("\n value b: %f",b);
	printf("\n a+b: %f",z);

	getch();
}