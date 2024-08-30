//pr5
//quotient and remainder
#include<stdio.h>
int main()
{
	int x,y,quotient,remainder;
	printf("\n enter x:");
	scanf("%d",&x);
	printf("\n enter y:");
	scanf("%d",&y);

	quotient=x/y;
	remainder=x%y;
	
	printf("\n quotient : %d",x/y);
	printf("\n remainder : %d",x%y );
}