//pointer3
//structure student
#include<string.h>
#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int m1,m2,m3,total;
	float per;
};
int main()
{
	int i;
	struct student st[5];	
	printf("enter records of 5 students");
	for(i=0;i<5;i++)
	{
		printf("enter rollno : ");
		scanf("%d",&st[i].rollno);
		printf("enter name : ");
		scanf("%s",&st[i].name);
		printf("enter m1 : ");
		scanf("%d",&st[i].m1);
		printf("enter m2 : ");
		scanf("%d",&st[i].m2);
		printf("enter m3 : ");
		scanf("%d",&st[i].m3);
	}
	printf("\n Student Information List : ");
	printf("\n---------------------------------------------------------------------\n");
	printf("\n rollno\tname\tm1\tm2\tm3\tTotal\tper");
	printf("\n---------------------------------------------------------------------\n");
	
	for(i=0;i<5;i++)
	{
		st[i].total=st[i].m1+st[i].m2+st[i].m3;
		st[i].per=st[i].total/3;
		//printf("\n rollno: %d \n name: %s",st[i].rollno,st[i].name);
		//printf("\n total: %d \n percentage: %f",st[i].total,st[i].per);
		printf("\n %d\t%s\t%d\t%d\t%d\t%d\t%f",st[i].rollno,st[i].name,st[i].m1,st[i].m2,st[i].m3,st[i].total,st[i].per);
	}
	return 0;
}