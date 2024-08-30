//function17
//square-cube
//with argument-with return
#include<stdio.h>
int main()
{
	int a;
	int sum(int);
	int dosum(int);	

	printf("\n enter a :");
	scanf("%d",&a);

	printf("\n square : %d",sum(a));
	printf("\n cube : %d",dosum(a));
}
int sum(int a)
{
	return a*a;
	
}
int dosum(int a)
{
	return a*a*a;
}