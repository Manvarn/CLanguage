//3d-dimension
#include<stdio.h>
int main()
{
	int a[10][10][10];
	int i,j,x;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(x=0;x<3;x++)
			{
				printf("enter a[ %d ][ %d ][ %d ] :",i,j,x);
				scanf("%d",&a[i][j][x]);
			}
		}
	}
	
	printf("\n----------- 3dimension is ----------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(x=0;x<3;x++)
			{
				printf("\t%d",a[i][j][x]);
			}
			printf("\n");
		}
		printf("\n");
	}
}