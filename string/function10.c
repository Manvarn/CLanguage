//function 10
//no argument-with return
//simple interest
#include<stdio.h>
int main()
{
	int a;
	int simple();
	a=simple();
	printf("\n simple : %d",a);
}
int simple()//function defination
{
	int p,n,r;
	printf("enter p:");
	scanf("%d",&p);
	printf("\nenter r:");
	scanf("%d",&r);
	printf("\nenter n:");
	scanf("%d",&n);
	
	return p*r*n/100; 
}