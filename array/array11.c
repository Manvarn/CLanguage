//array11 
#include<stdio.h>
int main()
{
	int rollno[10],physics[10],math[10],chemistry[10],total[10],per[10],grade[10],i;
	for(i=0;i<5;i++)
	{
		printf("enter rollno[ %d ]:",i);
		scanf("%d",&rollno[i]);
		printf("enter physics[ %d ]:",i);
		scanf("%d",&physics[i]);
		printf("enter math[ %d ]:",i);
		scanf("%d",&math[i]);
		printf("enter chemistry[ %d ]:",i);
		scanf("%d",&chemistry[i]);
	}

	printf("------------------------------------------------------");
	printf("\n rollno\tphysics\tmath chemistry Total   per\tgrade");
	printf("\n----------------------------------------------------");

	for(i=0;i<5;i++)
	{
		total[i]=physics[i],math[i],chemistry[i];
		per[i]=total[i]/3;
	
		if(per[i]>75)
		{
			grade[i]='a';
		}
		else if(per[i]>60 && per[i]<75)
		{
			grade[i]='b';
		}
		else if(per[i]>45 && per[i]<60)
		{
			grade[i]='c';
		}
		else if(per[i]>35 && per[i]<45)
		{
			grade[i]='d';
		}
		else
		{
			grade[i]='f';
		}
		
		printf("\n %d\t%d\t%d\t%d\t%d\t%d\t%c",rollno[i],physics[i],math[i],chemistry[i],total[i],per[i],grade[i]);
	}
}
