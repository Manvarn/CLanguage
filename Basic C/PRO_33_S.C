#include<stdio.h>
#include<conio.h>
void main()
{
	int math,physics,chemistry,total,percentage,grade;
	clrscr();
	printf("enter the value math:");
	scanf("%d",&math);
	printf("enter the value physics:");
	scanf("%d",&physics);
	printf("enter the value chemistry:");
	scanf("%d",&chemistry);

	total=math+physics+chemistry;
	percentage=total/3;
	printf("\nmath:%d\nphysics:%d\nchemistry:%d",math,physics,chemistry);
	printf("\n\ntotal:%d",total);
	printf("\npercentage:%d",percentage);

	if(percentage>75)
	{
		printf("\ngrade:a");
	}
	else if(percentage>60 && percentage<75)
	{
		printf("\ngrade:b");
	}
	else if(percentage>45 && percentage<60)
	{
		printf("\ngrade:c");
	}
	else if(percentage>35 && percentage<45)
	{
		printf("\ngrade:d");
	}
	else
	{
		printf("\ngrade:fail");
	}
	getch();
}

