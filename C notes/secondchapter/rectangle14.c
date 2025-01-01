#include<stdio.h>

int main()
{
    int a,b,c,d;

    printf("enter the width of rectangle");
    scanf("%d", &a);

    printf("Enter the height of rectangle");
    scanf("%d", &b);

    printf("Enter the width of rectangle");
    scanf("%d", &c);

    printf("Enter the height of rectangle ");
    scanf("%d", &d);

    int rectangle = a+b+c+d;

    printf("The perimeter of Rectangle is %d", rectangle);
}