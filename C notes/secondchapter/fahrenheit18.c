#include<stdio.h>

int main()
{
    float fahrenheit;

    printf("Enter the fahrenheit ");
    scanf("%f", &fahrenheit);

   float celsius = (fahrenheit- 32) *5/9;

    printf("fahrenheit to  celsius is %f", celsius);

    return 0;
}