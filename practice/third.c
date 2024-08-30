#include<stdio.h>
int main()
{
	int a;
	printf("\n enter a:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\na(%d) is positive... ",a);
	}
	else
	{
		printf("\na(%d) is negative...",a);
	}
}