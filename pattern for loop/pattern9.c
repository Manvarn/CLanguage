//pattern 9
#include<stdio.h>
int main()
{
	int i,j,k=11;
	for(i=1;i<=5;i++)//row
	{
		for(j=1;j<=5;j++,k++)//column
		{
			printf("\t %d",k);
		}
		printf("\n");
	k=k+5;
	}
}