#include<stdio.h>

int main()
{

    int number ;
    printf("Enter the number :");
    scanf("%d", &number);

    if(number > 0)
    {
        printf("This is positive number  ");
    } else if ( number < 0)
    {

        printf("This number is negative ");
    }

    else {

        printf("This number is zero");
    }

    return 0;
}