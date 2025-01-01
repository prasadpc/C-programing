#include<stdio.h>

int main()
{
    int radius;
    const float pi=3.14;

    printf("Enter the circle of radius");
    scanf("%d", &radius);

    printf("The area of circle is %f", pi * radius * radius );

    return 0;
}