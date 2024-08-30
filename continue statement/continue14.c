#include<stdio.h>
int main()
{
	int i,total=0;
	for(i=2;i<=10;i=i+2)
	{
		total=total+i;
		printf("\n %d",i);
	}
	printf("\n total:%d",total);	
}