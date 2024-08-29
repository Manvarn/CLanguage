//while pat5
#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf("\t%d",i*2);
			j++;
		}
		printf("\n");
		i++;	
	}
}