#include<stdio.h>

int main()
{
    float fr, tm;
    printf("Enter the fahreheit degree in your city");
    scanf("%f", &fr );
    tm=(fr-32)*5/9;
    printf("the temperature of city %f", tm);
}