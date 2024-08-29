//dowhile pat20
#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	do
	{
		j=i;	
		do	
		{
			printf("\t %c",j+64);
			j--;
		}while(j>=1);
		printf("\n");
		i++;
	}while(i<=5);
}