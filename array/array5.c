//array5
#include<stdio.h>
int  main()
{
	int i;
	int a[10],b[20];
	for(i=0;i<5;i++)
	{
		printf("\n enter a[%d]:",i);
		scanf("%d",&a[i]);
	}

	printf("\n\n");

	for(i=0;i<5;i++)
	{
		printf("\n enter b[%d]:",i);
		scanf("%d",&b[i]);		
	}
	for(i=0;i<5;i++)
	{
		printf("\n %d + %d = %d",a[i],b[i],a[i]+b[i]);
	}
}