#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("enter the value a:");
	scanf("\n%d",&a);
	printf("enter the value b:");
	scanf("\n%d",&b);

	c=a*b;
	printf("\nvalue a: %d",a);
	printf("\nvalue b: %d",b);
	printf("\na*b: %d",c);

	d=a+b;
	printf("\nvalue a: %d",a);
	printf("\nvalue b: %d",b);
	printf("\na+b: %d",d);

	if(d%c==0)
	{
		printf("\n(%d) is divisible...",d);
	}
	else
	{
		printf("\n(%d) is not divisible...",d);
	}
	getch();
}
