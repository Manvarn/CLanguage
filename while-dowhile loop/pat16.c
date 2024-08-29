//dowhile pat16
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
			if(i%2==0)
			{
				printf("\t%c",k+32);
			}
			else
			{
				printf("\t%c",k);
			}
		j++;
		k++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
}