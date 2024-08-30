//str8 Palindrom First Method
#include<stdio.h>
int main()
{
	int i,j,k=0;
	char a[10],b[10];
	printf("\n enter a:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++);
	j=i-1;
	for(i=j;i>=0;i--,k++)
	{
		b[i]=a[k];
	}
	b[k]='\0';
	puts(b);
	
	if(a[j]==b[j])
	{
		printf("\nIt is palindrom..");
	}
	else
	{
		printf("\nIt is not palindrom..");	
	}
}
