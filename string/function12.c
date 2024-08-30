//function12
//no argument-with return
//compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int compound();
	a=compound();
	printf("\n compound : %d",a);
}
int compound()
{
	int p,n;
	float r;
	
	printf("\n p :");
	scanf("%d",&p);
	printf("\n r :");
	scanf("%f",&r);	
	printf("\n n :");
	scanf("%d",&n);

	return p*pow( (1+r/100),n);
}