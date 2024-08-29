#include<stdio.h>
#include<conio.h>
void main()
{
	float a=0.5,b,h,triangle;
	clrscr();
	printf("\n enter b:");
	scanf("%f",&b);
	printf("\n enter h:");
	scanf("%f",&h);

	triangle=a*b*h;
	printf("\n value a: %f",a);
	printf("\n value b: %f",b);
	printf("\n value h: %f",h);
	printf("\n a*b*h: %f",triangle);
	getch();
}