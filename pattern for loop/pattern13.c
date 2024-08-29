//pattern 13
#include<stdio.h>
int main()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++,a++)
		{
			printf("\t%d",a);
		}
		printf("\n");
	}
}