//pointer2
#include<string.h>
#include<stdio.h>
int main()
{
	char a[100],b[100];
	char *p1,*p2;
	printf("\n enter a : ");
	scanf("%s",a);
	p1=a+strlen(a)-1;
	p2=b;
	while(p1>=a)
	{
		*p2=*p1;	
		p2++;
		p1--;
	}
	*p2='\0';
	printf("\n original string : %s",a);
	printf("\n reverse string : %s",b);
	return 0;
}
