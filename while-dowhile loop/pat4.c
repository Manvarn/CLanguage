//dowhile pat4
#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	do
	{
		j=1;
		do
		{
			printf("\t%c",i+64);
			j++;
		}while(j<=5);
		printf("\n");
		i++;	
	}while(i<=5);
}