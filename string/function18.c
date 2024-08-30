//function18
//pattern of triangle
//no argument-no return
#include<stdio.h>
int main()
{
	void pat();
	pat();	
}
void pat()
{
	int i,j,sp=10;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		sp--;
	}
}