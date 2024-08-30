#include<stdio.h>
int main()
{
	int i,a=1;
	for(i=1;i<=100;i=i*2)
	{
		printf("\n%d",i*a);
		a++;
	}
}