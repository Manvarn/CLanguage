#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,z;
	clrscr();

	printf("\n enter a&b:");
	scanf("%d%d",&a,&b);

	z=a*b;
	printf("\n a: %d\n b: %d",a,b);
	printf("\n a*b: %d",z);
	getch();
}