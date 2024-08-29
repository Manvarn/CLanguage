//while pat11
#include<stdio.h>
int main()
{
	int i,j,k=11;	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("\t%d",i);
			j++;
		}		
		printf("\n");
		i++;	
	}
}