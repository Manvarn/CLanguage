//function12
//with argument-with return
//compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	int p,n;
	float r;
	int compound(int,int,float);
	
	printf("\n p :");
	scanf("%d",&p);
	printf("\n r :");
	scanf("%f",&r);	
	printf("\n n :");
	scanf("%d",&n);

	printf("\ncompound : %d",compound(p,n,r));
}
int compound(int p, int n ,float r)
{
	return p*pow( (1+r/100),n);
}