//string function1
//strlen,strupr,strlwr,strrev
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	printf("enter string:");
	gets(a);

	printf("\n len:%d",strlen(a));
	
	strupr(a);
	printf("\n strupr=%s",a);
	
	strlwr(a);
	printf("\n strlwr=%s",a);

	strrev(a);
	printf("\n strrev=%s",a);
	
}