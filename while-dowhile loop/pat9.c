//while pat9
#include<stdio.h>
int main()
{
	int i,j,k=11;	
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf("\t%d",k);
			j++;
			k++;
		}
		printf("\n");
		i++;	
		k=k+5;
	}
}