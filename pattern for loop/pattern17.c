//pattern 17
#include<stdio.h>
int main()
{
	int i,j,k=97;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
			if(j%2==0)
			{
				printf("\t%c",k-32);
			}
			else
			{
				printf("\t%c",k);
			}
		}
		printf("\n");
	}
}