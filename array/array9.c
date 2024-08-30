//array9 odd element total
#include<stdio.h>
int main()
{
	int i,a[10],c=0;
	for(i=0;i<10;i++)
	{
		printf("\n enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			printf("\n  a[%d]:%d",i,a[i]);
			c=c+a[i];
		}
		
	}
		printf("\n odd element total:%d",c);
		
}