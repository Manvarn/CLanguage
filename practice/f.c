#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("\t * ");
            }
            else
            {
                printf("\t - ");
            }
        }
        printf("\n");
    }
}

