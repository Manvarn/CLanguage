//function 11
//with argument-with return
//simple interest
#include<stdio.h>
int main()
{
	int p,r,n;
	int simple(int,int,int);

	printf("enter p:");
	scanf("%d",&p);
	printf("\nenter r:");
	scanf("%d",&r);
	printf("\nenter n:");
	scanf("%d",&n);

	printf("\n simple : %d",simple(p,r,n));
}
int simple(int p, int r, int n)
{
	return p*r*n/100;
}