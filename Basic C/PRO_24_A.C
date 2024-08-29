#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=5,c=2,d=2,e=3;
	clrscr();
	printf("\n%d:",a+=10);
	printf("\n%d:",b-=a);
	printf("\n%d:",c*=a);
	printf("\n%d:",d/=a);
	printf("\n%d:",e%=a);
	getch();
}