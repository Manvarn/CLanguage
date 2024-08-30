//pointer1
#include<stdio.h>
void arraytopointer(int *p)
{
	printf("\n---------------- using pointer ----------------\n");
	for(int i=0;i<5;i++)
	{
		printf("\n value a[%d]: %d address a[%d]: %u",i,*(p+i),i,(p+i));
	}
}
int main()
{
	int a[5] ={11,22,33,44,55},i;
	int *p;
	for(i=0;i<5;i++)
	{
		printf("\n value a[%d]: %d address a[%d]: %u",i,a[i],i,&a[i]);
	}
	arraytopointer(a);
}

