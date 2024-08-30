//dowhile con20
#include<stdio.h>
int main()
{
	int i;
	i=1;
	do
	{
		if(i%4==0)
		{
			printf("\n%c",i+32);
		}
		else
		{
			printf("\n%c",i+64);
		}
		i=i+2;
	}while(i<=26);
}