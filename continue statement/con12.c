//dowhile con12
#include<stdio.h>
int main()
{
	int i,total=0;
	i=1;
	do
	{
		total=total+i;
		printf("\n%d",i);
		i++;	
	}while(i<=10);
	printf("\ntotal:%d",total);

}
