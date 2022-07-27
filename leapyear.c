#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("it is a leap year");

    }
    else
    {
        if(a%100==0)
        {
        printf("it is a century year");
            if(a%400==0)
            {
            printf("it is a leap year");
            }
            else
            {
            printf("it is a not a leap year");   
            }

        }
        printf("it is not a leap year");
    }
    return 0;
}