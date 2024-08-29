#include<stdio.h>
#include<conio.h>
void main()
{
	float a=0,b=9,c=5,d=32,e;
	clrscr();
	printf("\n enter a:");
	scanf("%f",&a);
	printf("\n enter b:");
	scanf("%f",&b);
	printf("\n enter c:");
	scanf("%f",&c);
	printf("\n enter d:");
	scanf("%f",&d);

	e=(a*b/c)+d;
	printf("\n value a: %f",a);
	printf("\n value b: %f",b);
	printf("\n value c: %f",c);
	printf("\n value d: %f",d);
	printf("\n(a*b/c)+d: %f",e);
	getch();
}