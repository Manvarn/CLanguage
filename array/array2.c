//array2
#include<stdio.h>
int main()
{
	int i;
	int arr[10];//declaration with size 10
	for(i=0;i<5;i++)
	{
		printf("\n enter arr[ %d ]:",i);		
		scanf("%d",&arr[i]);
	}
	//for printf an element of an array
	for(i=0;i<5;i++)
	{
		printf("\n arr[ %d ]: %d",i,arr[i]);
	}
}