//dowhile con13
#include<stdio.h>
int main()
{
	int i,a=0;
	i=2;
	do
	{
		a=a+i;
		printf("\n%d",i);
		i=i+2;
	}while(i<=10);
	printf("\na:%d",a);
}