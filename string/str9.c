//str9 palindrom second method
#include<stdio.h>
int main()
{
	int i,j,k;
	char str1[10];
	printf("STRING 1:");
	gets(str1);
	for(j=0;str1[j]!='\0';j++);
	for(i=0,j=j-1;i<j;i++,j--)
	{	
		if(str1[i]!=str1[j])
		{
			k=1;
		}
	}
	if(k==0)
		{
			printf("\n is palindrom");
		}
		else
		{
			printf("\n is not palindrom");
		}
	

}





















































