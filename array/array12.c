//aray12
#include<stdio.h>
int main()
{
	int i,number[10],unit[10],billamount[10];
	for(i=0;i<5;i++)
	{
		printf("\n enter the number[%d]:",i);
		scanf("%d",&number[i]);
		printf("\n enter the unit[%d]:",i);
		scanf("%d",&unit[i]);
	}	
		
	printf("\n----------------------------");
	printf("\n number\tunit\tbillamount");
	printf("\n----------------------------");
	
	for(i=0;i<5;i++)
	{
		if(unit[i]<=100)
		{	
			billamount[i]=unit[i]*0.6+50;
		}
		else if(unit[i]>100 && unit[i]<=300)
		{
			billamount[i]=100*0.6+(unit[i]-100)+0.8+50;
		}
		else if(unit[i]>300)
		{
			billamount[i]=100*0.6+200*0.8+(unit[i]-100)+0.9+50;
		}
		if(unit[i]>300)
		{
			billamount[i]=billamount[i]*1.15;
		}
		printf("\n %d\t%d\t%d",number[i],unit[i],billamount[i]);
	}
}
