//function7
//with argument- no return
//compound 
#include<stdio.h>
#include<math.h>
int main()
{
	int p,n;
	float r,ci;
	void intrest(int,int,float,float);
	printf("\n P :");
	scanf("%d",&p);
	printf("\n R :");
	scanf("%f",&r);
	printf("\n N :");
	scanf("%d",&n);

	intrest(p,n,r,ci);
}
void intrest(int p,int n,float r,float ci)
{
	printf("\n CMPOUND INTREST :%f",ci=p*pow( (1+r/100),n));
	printf("\n TOTAL :%f",ci-p);
}