//while con13
#include<stdio.h>
int main()
{
	int i,a=0;
	i=1;
	while(i<=10)
	{
		a=a+i;
		printf("\n%d",i);
		i=i+2;
	}
	printf("\na:%d",a);
}