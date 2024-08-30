//function14
//square-cube
//no argument-no return
#include<stdio.h>
int main()
{
	void square();
	void cube();
	
	square();
	cube();
}
void square()
{
	int a;
	printf("\nenter a:");
	scanf("%d",&a);
	
	printf("square: %d",a*a);
}
void cube()
{
	int a;
	printf("\ncube: %d",a*a*a);
}