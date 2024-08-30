#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);

	c=a*b;	
	printf("\n a*b:",c);
	
	if(c%21==0)
	{
		printf("\n c(%d) is divisible...",c);
	}
	else
	{
		printf("\n c(%d) is not divisible...",c);
	}
}