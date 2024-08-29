//dowhile pat22
#include<stdio.h>
int main()
{
        int i,j,sp=10;
        i=1;
        do
        {
                j=1;
                do
                {
                        printf(" ");
                        j++;
                }while(j<=sp);
                j=1;
                do
                {
                        printf(" *");
                        j++;
                }while(j<=i);
                printf("\n");
                i++;
                sp--;
        }while(i<=5);
        i=5;
        do
        {
                j=1;
                do
                {
                        printf(" ");
                        j++;
                }while(j<=sp);
                j=0;
                do
                {
                        printf(" *");
                        j++;
                }while(j<=i);
                printf("\n");
                i--;
                sp++;
        }while(i>=0);
        

}

