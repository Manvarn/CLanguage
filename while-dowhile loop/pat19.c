//while pat19
#include<stdio.h>
int main()
{
	int i,j;
	i=5;
	while(i>=1)
	{
		j=i;
		while(j<=5)
		{
			printf("\t %d",j);
			j++;
		}
		printf("\n");
		i--;
	}
}