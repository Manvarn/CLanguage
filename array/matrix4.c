//matrix4
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[ %d ][ %d ] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	
	printf("\n------------ Sec Matrix is ------------\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter b[ %d ][ %d ] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\t--first Matrix--\t--sec matrix--\t\t--total matrix--\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]+b[i][j]);
		}
		printf("\n");	
	}	
}