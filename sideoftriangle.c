#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter all three sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>=c&&b+c>=a&&a+c>=b)
    {
        printf("valid triangle");
    }
    else{
        printf("not valid triangle");
    }
    return 0;
   
     
}