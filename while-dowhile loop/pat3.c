//while pat3
#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("\t%d",j);
			j++;
		}
		printf("\n");
		i++;	
	}
}