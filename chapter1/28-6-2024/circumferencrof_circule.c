#include<stdio.h>

int main()
{
    const float pi= 3.14159;
    int radius;
    printf("Enter the radius of circle in cm ");
    scanf("%d", &radius);

    printf("The circumference of the circle is %f", 2 * pi * radius);
    return 0;
}