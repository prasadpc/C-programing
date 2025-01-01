#include<stdio.h>

int main()
{
    int width, height;

    printf("Enter the triangle of width");
    scanf("%d", &width);

    printf("Enter the height of triangle");
    scanf("%d", &height);

    float result = 0.5 * width * height ;
    printf("Area of triangle is %f", result);

    return 0;
}