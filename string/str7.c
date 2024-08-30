//str7 ski*****e
#include<stdio.h>
int main()
{
	int i,a,b;
	char str1[10];
	printf("\n Enter str1:");
	gets(str1);
	printf("\n Enter start:");
	scanf("%d",&a);
	printf("\n Enter end:");
	scanf("%d",&b);
	
	
	for(i=a;i<=b;i++)
	{
		str1[i]='*';
	}
	puts(str1);
	
}
