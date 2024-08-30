//diagonal
#include<stdio.h>
int main()
{
	int a[10][10],sum=0,b=0,c=0;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[ %d ][ %d ] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n------------ Matrix is ------------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{	
				sum=sum+a[i][j];	
			}
			else if(i<j)
			{
				b=b+a[i][j];
			}
			if(i>j)
			{
				c=c+a[i][j];
			}
		}
	}
		printf("\n DIMENSIONAL: %d",sum);
		printf("\n UPEERTRINGLE: %d",b);
		printf("\n LOWERTRINGLE: %d",c);
}



