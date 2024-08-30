// switch case1
#include<stdio.h>
int main()
{
    int a=10,b=10,ch;
    printf("\n a=%d\t b=%d",a,b);
    printf("\n 1. addition");
    printf("\n 2. subtraction");
    printf("\n 3. multiplication");
    printf("\n 4. dvision");
    printf("\n enter your choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
    printf("\n\n a+b : %d",a+b);
    break;
    case 2:
    printf("\n\n a-b : %d",a-b);
    break;
    case 3:
    printf("\n\n a*b : %d",a*b);
    break;
    case 4:
    printf("\n\n a/b : %d",a/b);
    break;
    default:
        printf("\n wrong ! choice...");
        break;
    }
}