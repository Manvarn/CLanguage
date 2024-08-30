//function16
//square-cube
//no argument-with return
#include<stdio.h>
int sum()
{
	int a;
	printf("\n enter a : ");
	scanf("%d",&a);
	
	return a*a;
}
int dosum()
{
	int a;
	printf("\n enter a : ");
	scanf("%d",&a);
	
	return a*a*a;
}
int main()
{
	printf("\n square : %d",sum());
	printf("\n cube : %d",dosum());
}	