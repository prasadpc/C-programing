#include<stdio.h>

int main()
{
    float p, r, t;

    printf("Enter the principle amount ");
    scanf("%f", &p);

    printf("Enter the Interest rate");
    scanf("%f", &r);

    printf("Enter the Time ");
    scanf("%f", &t);

    float simple= p*r*t/100;

    printf("The simplinterest is %f",simple + p);

    return 0;
}