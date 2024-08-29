//while pat13
#include<stdio.h>
int main()
{
	int i,j,k=1;
	i=1;
	while(i<=5)
	{
		j=1;
		do
		{
			printf("\t%d",k);
			j++;
			k++;
		}while(j<=i);
		printf("\n");
		i++;
	}
}