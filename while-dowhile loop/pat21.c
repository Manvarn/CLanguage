//while pat21
#include<stdio.h>
int main()
{
	int i,j,k=1;
	i=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("\t %d",k);
			j++;
			k=!k;
		}
		printf("\n");
		i++;
	}
}