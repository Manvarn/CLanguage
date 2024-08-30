//array3
#include<stdio.h>
int main()
{
	int i,j;
	int arr[10];
	for(i=0;i<5;i++)
	{
		printf("\n enter arr[ %d ]:",i);		
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
	printf("\n arr[ %d ]: %d",i,arr[i]);
	}

	printf("\n--------------------------------------------------------\n");
	
	for(j=0;j<5;j++)
	{
		printf("\n enter arr[ %d ]:",j);		
		scanf("%d",&arr[j]);
	}
	
	for(j=0;j<5;j++)
	{
	printf("\n arr[ %d ]: %d",j,arr[j]);
	}
}