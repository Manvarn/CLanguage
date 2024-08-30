//str2
#include<stdio.h>
int main()
{
	char str[20];
	int i;
	printf("\n Enter string:");
	gets(str);

	printf("\n str:%s",str);
	for(i=0;str[i]!='\0';i++);
	{
		printf("\n length :%d",i);
	}	
}