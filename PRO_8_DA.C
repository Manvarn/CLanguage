#include<stdio.h>
#include<conio.h>
int main()
{
    int maths=90, physics=77,chemistry=69,total,per;

    clrscr();
    total=maths+physics+chemistry;
    printf("\n maths+physics+chemistry= %d",total);

    per=total/(maths+physics+chemistry);
    printf("\n (maths+physics+chemistry)/total= %d",per);
    return 0;

}