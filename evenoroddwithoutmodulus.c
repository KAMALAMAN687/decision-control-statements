#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if((a&1)==0)
    printf("EVEN");
    else
    printf("ODD");
    return 0;
}