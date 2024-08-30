//function 4
//with argument-no return
//simple interest
#include<stdio.h>
int main()
{
	int p,r,n,si,total;
	void simple(int,int,int,int,int);//function declaration

	printf("enter p:");
	scanf("%d",&p);
	printf("\nenter r:");
	scanf("%d",&r);
	printf("\nenter n:");
	scanf("%d",&n);
	
	simple(p,r,n,si,total);//function calling
}
void simple(int p,int r,int n,int si, int total)
{
	printf("\n si:%d",p*r*n/100);
	si=p*r*n/100;
	printf("\n total:%d",si+p);
}