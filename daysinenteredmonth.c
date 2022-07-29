#include<stdio.h>
int main()
{
    int a;
    printf("enter a month number: ");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
        printf("no. of days in entered month is 31");
    }
    else
    {
        if(a==4||a==6||a==9||a==11)
    {
        printf("no. of days in entered month is 30");
    }
       else
       {
        printf("no. of days in entered month can be 28/29");
       }
    }
    return 0;
}