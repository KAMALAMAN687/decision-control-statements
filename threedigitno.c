#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    if(a>100&&a<999)
    printf("it's a three digit number");
    else
    printf("not a three digit number");
    return 0;



}