//pr3
//simple interest
#include<stdio.h>
int main()
{
	int p,r,n,si,total;
	printf("\n enter p :");
	scanf("%d",&p);
	printf("\n enter r :");
	scanf("%d",&r);
	printf("\n enter n :");
	scanf("%d",&n);

	si=p*r*n/100;
	total=si+p;
	printf("\n si : %d",p*r*n/100);
	printf("\n total : %d",si+p);
}