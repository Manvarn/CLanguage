#include<stdio.h>
#include<conio.h>
void main()
{
	float feet,inches,total;
	clrscr();
	printf("\n feet:");
	scanf("%f",&feet);
	printf("\n inches:");
	scanf("%f",&inches);

	total=feet*inches;
	printf("\n feet*inches: %f",total);
	getch();
}