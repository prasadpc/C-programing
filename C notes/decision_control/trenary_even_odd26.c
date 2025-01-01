#include<stdio.h>

int main(){

    int number;

    printf("Enter the Number:");
    scanf("%d", &number);

    number %2 ==0 ? printf("the number is even ")
                  : printf("The number is odd");

    return 0;
}