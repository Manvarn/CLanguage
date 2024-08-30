//dowhile con22
#include<stdio.h>
int main()
{
	float a=0.5,b=10;
	int i,z=0;
	printf("\n%.1f",a);
	i=0;
	do
	{
		float c=z+0.5;
		a=a+c;
		printf("\n%.1f",a);
		i++;
		z++;	
	}while(i<=8);
}