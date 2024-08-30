//a4 small to big/ big to small
#include<stdio.h>
int main()
{
	int i;
	char a[100];
	printf("a:");
	gets(a);

	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)	
		{
			a[i]=a[i]+32;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	puts(a);
}

