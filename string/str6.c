//str6 join two str
#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i,j;
	printf("enter str1:");
	gets(a);
	printf("enter str2:");
	gets(b);

	for(i=0;a[i]!='\0';++i);
	for(j=0;b[j]!='\0';++j,++i)
	{
		a[i]=b[j];
	}
	a[i]='\0';
	puts(a);
}