#include<stdio.h>
int main()
{
printf("enter two no. a and b which have to be checked which one is greater\n");
int a,b;
scanf("%d%d",&a,&b);
if(a>b)
printf("%d is greater than %d",a,b);
else
printf("%d is greater than %d",b,a);
return 0;

}