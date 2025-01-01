#include<stdio.h>

int main()
{
    int first, second, temp;

    printf("Enter the first number: \n");
    scanf("%d", &first);

    printf("Enter the second number : \n");
    scanf("%d", &second);

    temp = first;
    first = second;
    second = temp;

    printf("After the swapping first= %d second= %d", first, second);

    return 0 ;
    
}