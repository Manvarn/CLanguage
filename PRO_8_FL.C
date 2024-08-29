#include<stdio.h>
#include<conio.h>
int main()
{
	float maths=90,physics=77,chemistry=69,total,percentage;
	clrscr();

	total=maths+physics+chemistry;
	percentage=total/3;

	printf("\n maths: %f\n physics: %f\n chemistry: %f",maths,physics,chemistry);
	printf("\n\n total: %f",total);
	printf("\n percentage: %f",percentage);
	return 0;



}