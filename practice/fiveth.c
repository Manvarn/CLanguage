#include<stdio.h>
int main()
{
	int x;
	printf("\n enter x:");
	scanf("%d",&x);

	if(x%15==0)
	{
		printf("\n x(%d)is divisible...",x);
	}
	else
	{		
		printf("\n x(%d)is not divisible...",x);
	}
}