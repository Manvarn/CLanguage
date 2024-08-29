#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("enter the value x:");
	scanf("\n%d",&x);
	printf("enter the value y:");
	scanf("\n%d",&y);

	z=x*y;
	printf("\nvalue x: %d",x);
	printf("\nvalue y: %d",y);
	printf("\nx*y: %d",z);

	if(z%21==0)
	{
		printf("\nz(%d) is divisble...",z);
	}
	else
	{
		printf("\nz(%d) is not divisble...",z);
	}
	getch();
}
