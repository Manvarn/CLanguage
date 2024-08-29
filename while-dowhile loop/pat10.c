//dowhile pat10
#include<stdio.h>
int main()
{
	int i,j,k=11;	
	i=1;
	do
	{
		j=1;
		do
		{
			printf("\t%d",j);
			j++;
		}while(j<=i);
		printf("\n");
		i++;	
	}while(i<=5);
}