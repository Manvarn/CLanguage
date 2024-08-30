#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);

	c=a*b;	
	printf("\n a*b:",c);
	
	d=a+b;
	printf("\n a+b:",d);

	if(d%c==0)
	{
		printf("\n (%d) is divisible...",d);
	}
	else
	{
		printf("\n (%d) is not divisible...",d);
	}
}




