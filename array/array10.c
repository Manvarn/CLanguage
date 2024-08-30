//array10 all element total
#include<stdio.h>
int main()
{
	int i,a[10],b=0,c=0 ,d,e=0,f=0,g;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n enter a[%d]:",i,a[i]);
			c=c+a[i];	
		}
		else
		{
			printf("\n enter a[%d]:",i,a[i]);
			b=b+a[i];	
		}
		if(i%2==0)
		{
			f=f+i;		
		}
		else
		{
			e=e+i;
		}
	}
		printf("\n odd element total:%d",b);
		printf("\n odd element total:%d",c);
		d=b+c;
		printf("\n total:%d",d);
		
		printf("\n odd position element total:%d",e);
		printf("\n even position element total:%d",f);
}	
