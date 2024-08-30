//str4 reverse
#include<stdio.h>
int main()
{
	int i,j,n;
	char str1[20],str2[20];
	
	printf("Enter str1:");
	gets(str1);
	for(n=0;str1[n]!='\0';n++);
	
	j=n-1;
	for(i=0;i<n;i++)
	{
		str2[i]=str1[j];
		j--;
	}
	str2[i]='\0';

	printf("string str2: %s",str2);
	
	
}

