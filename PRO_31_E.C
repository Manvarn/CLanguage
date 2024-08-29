#include<stdio.h>
#include<conio.h>
void main()
{
	float unit,total;
	clrscr();
	printf("\n unit:");
	scanf("%f",&unit);

	if(unit<=100)
	{
		total=unit*0.6+50;
	}
	else if(unit>100 && unit<=300)
	{
		total=100*0.6+(unit-100)*0.8+50;
	}
	else if(unit>300)
	{
		total=100*0.6+200*0.8+(unit-300)*0.9+50;
	}
	if(unit>300)
	{
		total=total*1.15;
	}
	printf("\nbill: %.2f",total);
	getch();
}