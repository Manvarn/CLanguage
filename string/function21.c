//function21
//student result
//with argument-with return
#include<stdio.h>
int rollno;
char name[10];
int  maths,physics,chemistry,total;
float per;
int main()
{
	int getdata(int,char,int,int,int,int,float);
	
	printf("ROLL NO :");
	scanf("%d",&rollno);
	printf("NAME:");
	scanf("%s",&name);
	printf("MATHS :");
	scanf("%d",&maths);
	printf("PHYSICS:");
	scanf("%d",&physics);
	printf("CHEMISTRY:");
	scanf("%d",&chemistry);

	getdata(rollno,name[10],maths,physics,chemistry,total,per);

	int calculatedata(int,char,int,int,int,int,float);
	
	total=maths+physics+chemistry;
	per=total/3;

	 calculatedata(rollno,name[10],maths,physics,chemistry,total,per);

	int printresult(int,char,int,int,int,int,float);
	printf("\n-----------------------------------------------------------\n");
	printf("\n ROLLNO\tNAME\tMATHS\tPHYSICS\tCHEMISTRY\tTOTAL\tPER");
	printf("\n-----------------------------------------------------------\n");
	printf("\n%d\t%s\t%d\t%d\t%d\t \t%d\t%f",rollno,name,maths,physics,chemistry,total,per);

	printresult(rollno,name[10],maths,physics,chemistry,total,per);
}
int getdata(int rollno,char name, int maths, int physics, int chemistry, int total,float per)
{

}
int calculatedata(int rollno,char name ,int maths, int physics, int chemistry,int total,float per)
{
	printf("\nTOTAL :%d",total);
	printf("\nPER :%.2f",per);
}
int printresult(int rollno,char name, int maths, int physics, int chemistry, int total, float per)
{
	
}