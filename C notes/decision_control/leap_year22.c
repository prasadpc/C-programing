#include<stdio.h>

int main()
{
    int leap;

    printf("Enter the leap year:");
    scanf("%d", &leap);

    if(leap %4 ==0)
    {
        printf("This the leap year %d", leap);

    }else{
        printf("Enter this not leap year", leap);
    }
}