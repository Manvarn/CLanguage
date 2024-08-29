//pattern 6
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i=i+2)//row
	{
		for(j=1;j<=5;j++)//column
		{
			printf("\t %d",i);
		}
		printf("\n");
	}
}