//Palindrom using string fucntion3
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	printf("\n STRING 1 :");
	gets(str1);
	
	strcpy(str2,str1);
	printf(" STRING 2 :%s\n",str2,str1);
	
	strrev(str2);
	printf("\n %s",str2);
	
	printf("\n strcmp : %d",strcmp(str1,str2));	
	if(strcmp(str1,str2)==0)
	{
		printf("\n it is palindrom");
	}
	else
	{
		printf("\n it is not palindrom");
	}
}
