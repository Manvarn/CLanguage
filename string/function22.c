//function22
//pattern of christmas
#include<stdio.h>
void pat(int n)
{
	int i,j,sp=10;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<i*2;j++)
		{
			printf("*");
		}
		sp--;
		printf("\n");
	}
}
void tree(int n)
{
	int i,j,sp=9;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=3;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	pat(3);	
	pat(5);
	pat(7);
	tree(3);
}