#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("enter the value age:");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("\nage(%d) is eligible...",age);
	}
	else
	{
		printf("\nage(%d) is not eligible...",age);
	}
	getch();
}