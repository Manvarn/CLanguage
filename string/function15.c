//function15
//square-cube
//with argument-no return
#include<stdio.h>
int main()
{
	int a;
	void square(int a);
	void cube(int a);

	printf("enter a:");
	scanf("%d",&a);

	square(a);
	cube(a);
}
void square(int a)
{
	printf("\nsquare: %d",a*a);
}
void cube(int a)
{
	printf("\ncube: %d",a*a*a);
}
	