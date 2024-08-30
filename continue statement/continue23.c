#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=25;i+=2)
	if(i%4==0)
	{
		printf("\n %c",i+65);
	}
	else
	{
		printf("\n %c",i+97);
	}
}