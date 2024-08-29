//pattern 3
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)//row
	{
		for(j=1;j<=5;j++)//column
		{
			printf("\t%d",j);
		}
		printf("\n");
	}
}