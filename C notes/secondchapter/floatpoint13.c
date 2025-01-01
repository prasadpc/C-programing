#include<stdio.h>

int main()
{
    float first, second;

    printf("Enter the first floating number\n ");
    scanf("%f", &first);

    printf("Enter the second number \n");
    scanf("%f", &second);

    float product = first + second;

    printf("Display the output %f", product);

    return 0;
}