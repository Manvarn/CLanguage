//array6 odd position element total
#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=1;i<10;i++)
	{
		printf("\n enter arr[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	for(i=1;i<10;i=i+2)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
	}
	printf("\n odd position element total:%d",sum);
}