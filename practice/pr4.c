//pr4
//plus two operator
#include<stdio.h>
int main()
{
	int x,y,z=0,i;
	printf("\n enter x :");
	scanf("%d",&x);
	printf("\n enter y :");
	scanf("%d",&y);
	
	for(i=1;i<=y;i++)
	{
		z=z+x;
	}	
	printf("\n  %d",z);
}
