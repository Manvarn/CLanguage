#include<stdio.h>
#include<conio.h>
void main()
{
	float math,physics,chemistry,total,percentage;
	clrscr();
	printf("\n math:");
	scanf("%f",&math);
	printf("\n physics:");
	scanf("%f",&physics);
	printf("\n chemistry:");
	scanf("%f",&chemistry);

	total=math+physics+chemistry;
	printf("\n math+physics+chemistry: %f",total);

	percentage=total/3;
	printf("\n total/3: %f",percentage);
	getch();

}