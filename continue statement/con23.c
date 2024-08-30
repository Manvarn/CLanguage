//while con23
#include<stdio.h>
int main()
{
	int i,a=65;
	i=0;
	while(i<=25)
	{
		if(i%4==0)
		{
			printf("\n%c",i+65);
		}
		else
		{
			printf("\n%c",i+97);
		}
		i=i+2;
	}

}