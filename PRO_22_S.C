#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,n,si,total;
	clrscr();
	printf("\n enter the value p:");
	scanf("%f",&p);
	printf("\n enter the value r:");
	scanf("%f",&r);
	printf("\n enter the value n:");
	scanf("%f",&n);

	si=p*r*n/100;
	total=si+p;
	printf("\n p: %f\nr: %f\n: %f",p,r,n);
	printf("\n si: %f",si);
	printf("\n total: %f",total);
	getch();
}