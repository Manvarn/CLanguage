//pattern 15
#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("\t %c",j);
		}
		printf("\n");
	}
}