//function26
//with argument-with return
//electricity bill
#include<stdio.h>
int main()
{
	int no,unit;	
	float total;
	int bill(int,int,float);
	
	printf("\n no:");
	scanf("%d",&no);
	printf("\n unit:");
	scanf("%d",&unit);	
	
	printf("\n----------------------------------------------");
	printf("\n no\tunit\tTotal");	

	 if(unit<=100)
	{
		total=unit*0.6+50;
	}
	else if(unit>100 && unit<=300)
	{
		total=100*0.6+(unit-100)*0.8+50;
	}
	else if(unit>300)
	{
		total=100*0.6+200*0.8+(unit-300)*0.9+50;
	}	
	if(unit>300)
	{
		total=total*1.15;
	}	
	
	printf("\n----------------------------------------------");
	printf("\n %d\t%d\t%.2f",no,unit,total);       
	
}
int bill(int no, int unit , float total)
{
	
}