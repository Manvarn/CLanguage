//pattern 2
#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)//row
	{
		for(j=5;j>=1;j--)//column
		{
			printf("\t %d",i);
		}
		printf("\n");
	}
}