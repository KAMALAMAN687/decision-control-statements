#include<stdio.h>
int main()
{
printf("enter the values of a,b,c in the expression ax2+bx+c=0\n");
int a,b,c,D;
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
printf("%d is a Discriminant\n",D);
if(D<0)
printf("roots are imaginaary");
if(D==0)
printf("roots are real and equal");
if(D>0)
printf("roots are real and distinct");
return 0;
}