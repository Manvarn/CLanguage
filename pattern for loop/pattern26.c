//pattern 26
#include<stdio.h>
int main()
{
	int i,j,sp=30;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		sp--;
	}
	
	
	for(i=5;i>=0;i--)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=0;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		sp++;
	}
}