//pr1
//sum and average
#include<stdio.h>
int main()
{
	float a,b,sum,average;
	printf("\n enter a :");
	scanf("%f",&a);
	printf("\n enter b :");
	scanf("%f",&b);
	
	sum=a+b;
	average=sum/2;
	printf("\n sum : %.2f",a+b);
	printf("\n average : %.2f",sum/2);
}