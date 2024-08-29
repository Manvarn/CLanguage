#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x;
	clrscr();
	printf("\n a:");
	scanf("%d",&a);
	printf("\n b:");
	scanf("%d",&b);

	x=a;
	a=b;
	b=x;
	printf("\na: %d",a);
	printf("\nb: %d",b);
	getch();
}