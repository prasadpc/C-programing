#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number ");
    scanf("%d", &number);

    float convert= number;
    printf("Converted number is %f \n", convert);
    printf("original number is %d \n", number);

    return 0;
}
