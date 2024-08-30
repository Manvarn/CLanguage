//function8
//student reuslt
//no argument-no return
#include<stdio.h>
int rollno,maths,phy,che,total;
char name[10];
float per;
int main()
{
	void getdata();
	getdata();	
	void calculatedata();
	calculatedata();
	void printresult();
	printresult();
}
void getdata()
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
void calculatedata()
{
	printf("\n TOTAL :%d",total);
	printf("\n PER :%.2f",per);
}
void printresult()
{
	printf("\n-----------------------------------------------------------\n");
	printf("\n ROLLNO\tNAME\tMATHS\tPHY\tCHE\tTOTAL\tPER");
	printf("\n-----------------------------------------------------------\n");
	printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%f",rollno,name,maths,phy,che,total,per);
}