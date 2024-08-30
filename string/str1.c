//str1
#include<stdio.h>
int main()
{
	char str[10];
	printf("\n enter string:");
	//scanf("%s",str);
	//scanf("%[^\n]",str);
	gets(str);

	puts(str);
	printf("\n str:%s",str);
}