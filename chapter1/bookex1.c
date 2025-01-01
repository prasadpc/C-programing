#include<stdio.h>

int main()
{
    int a,b,c,d;

    printf("\n ente the your salary:");
    scanf("%d", &a);

    printf("\n your salary is  %d:", a);
    b=a/100*40;
    c= a/100*20;
    d=a+b+c;

    printf("\n your dearness allowance is  %d:",b);
    printf("\n your rent house %d",c);
    printf("\n total salary you have %d", d);



    return 0;




}