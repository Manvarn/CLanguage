//array7 even position element total
#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("\n enter arr[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i=i+2)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("\n even position element total:%d",sum);
}