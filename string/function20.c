//function20
//student result
//no argument-with return
#include<stdio.h>
int rollno;
char name[10];
int maths,phy,che,total;
float per;
int main()
{
	int getdata();
	getdata();	
	
	int calculatedata();
	printf("\n total: %d",calculatedata());
	printf("\n per: %d",calculatedata());
	calculatedata();
	
	int printdata();
	printf("\n-----------------------------------------------------------\n");
	printf("\n ROLLNO\tNAME\tMATHS\tPHY\tCHE\tTOTAL\tPER");
	printf("\n-----------------------------------------------------------\n");
	printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%f",rollno,name,maths,phy,che,total,per);
}
int getdata()
{
	printf("ROLL NO :");
	scanf("%d",&rollno);
	printf("NAME:");
	scanf("%s",&name);
	printf("MATHS :");
	scanf("%d",&maths);
	printf("PHY :");
	scanf("%d",&phy);
	printf("CHE :");
	scanf("%d",&che);

	
	total=maths+phy+che;
	per=total/3;
}
int calculatedata()
{
	return maths+phy+che;
	return maths+phy+che/3;
}
int printdata()
{

}