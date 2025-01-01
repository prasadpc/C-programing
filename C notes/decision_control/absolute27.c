#include<stdio.h>

int main()
{
    int number;

    printf("Enter the Number");
    scanf("%d", &number);

    printf("%d is absolute Number", (number > 0 ? number : -number ));
}