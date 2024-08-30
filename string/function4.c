//function 4
//no argument-no return
#include<stdio.h>
int main()
{
	void simple();//function declaration	
	simple();//function calling
}
void simple()//function defination
{
	int p,n,r,si,total;
	printf("enter p:");
	scanf("%d",&p);
	printf("\nenter r:");
	scanf("%d",&r);
	printf("\nenter n:");
	scanf("%d",&n);
	
	si=p*r*n/100;
	total=si+p;
	printf("\n si:%d",si);
	printf("\n total:%d",total);
}