//dowhile pa18
#include<stdio.h>
int main()
{
	int i,j,k=65;
	i=1;
	do
	{
		j=1;
		do
		{
			printf("\t%c",k);
			j++;
			k++;
		}while(j<=i);
		printf("\n");
		i++;	
	}while(i<=5);
}