//string function2
//strcpy,strcat,strcmp,strcmpi
#include<stdio.h>
#include<string.h>
int main()
{
	int lenstr1;
	char a[10],b[10];

	lenstr1=strlen(a);
	printf("\n a length:%d",lenstr1);

	printf("\n enter a:");
	gets(a);
	printf("\n enter b:");
	gets(b);
		
	//strcpy(b,a);//copy
	//printf("\n a:%s",a);

	strcat(a,b);//concate
	//printf("\n a:%s",a);
	//printf("\n b:%s",b);
	
	//printf("strcmp:%d",strcmp(a,b));
	//printf("\nstrcmpi:%d",strcmpi(a,b));
	printf("\n strcat: %s",a,b);
}