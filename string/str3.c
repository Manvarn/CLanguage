//str3 copy
#include<stdio.h>
int main()
{
	int i;
	char str1[10],str2[10];
	printf("enter str1:");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("str2:%s",str2);
}



