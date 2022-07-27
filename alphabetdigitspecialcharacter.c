#include<stdio.h>
int main()
{
    char a;
    printf("enter a character from a keyboard");
    scanf("%c",&a);
    if(a<=90&&a>=65)
    {
        printf("uppercase letter");
    }
    if(a>=97&&a<=122)
    {
        printf("lowercase letter");
    }
    if(a>=48&&a<=57)
    {
        printf("digit");
    }
    if(a<=126||a>=123||a>=32||a<=47||a>=58||a<=64||a>=91||a<=96)
    {
        printf("special character");
    }
    
    return 0;
}