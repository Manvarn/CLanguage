//fucntion6
//no argument-no return
//formula of compound interest-->//a*pow((1+r/100),t)-a
//COMPUND INTREST
#include<stdio.h>
#include<math.h>
int main()
{
	void intrest();
	intrest();
}
void intrest()
{
	int p,n;
	float r,ci;
	printf("\n P :");
	scanf("%d",&p);
	printf("\n R :");
	scanf("%f",&r);	
	printf("\n N :");
	scanf("%d",&n);
	
	printf("\n COMPUND INTREST :%.4f",ci=p*pow( (1+r/100),n));
	printf("\n TOTAL :%f",ci-p);
}



