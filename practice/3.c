#include<stdio.h>
int main()
{
	int a=100,b=20,c=50;
	if(a>b && a>c)
	{
		printf("\n a(%d) is greater...",a);
	}
	else
	{
		if(b>c)
		{
			printf("\n b(%d) is greater...",b);
		}
		else
		{
			printf("\n c(%d) is greater...",c);
		}
	}
}