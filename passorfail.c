#include<stdio.h>
int main()
{
    int a ,b,c, d,e;
    printf("enter five subject number of  a student :  ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33&&b>=33)
    {
        if(c>=33&&d>=33)
        {
            if(e>=33)
            printf("PASS");
        }

    }
    else
    {
        printf("FAIL");
    }
    return 0;

}