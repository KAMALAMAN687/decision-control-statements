#include<stdio.h>
int main()
{
    float cp,sp;
    float profit ,loss ;
    printf("enter a cost price and selling price of a product : ");
    scanf("%f%f",&cp,&sp);
    if(sp>=cp)
    {
        profit=(sp-cp)/cp;
        printf("It's profit percentage is %f",profit*100);
    }
    else
    {
        loss=(cp-sp)/cp;
        printf("Its loss percentage is %f",loss*100);

    }
    return 0;
}