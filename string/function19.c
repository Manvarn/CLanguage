//function19
//pattern of triangle
//with argument-no return
#include<stdio.h>
int main()
{
	int i,j,sp=10;
	void pat(int,int,int);
	
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

		pat(i,j,sp);
	}
}
void pat(int i,int j, int sp)
{

}