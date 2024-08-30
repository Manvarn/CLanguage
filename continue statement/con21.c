//while con21
#include<stdio.h>
int main()
{
	int i,a=0,b=1,c;
	i=1;
	while(i<=10)
	{
		c=a+b;
		b=a;
		a=c;
		printf("\n %d",c);
		i++;	
	}
}