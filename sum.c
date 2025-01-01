#include<stdio.h>

int main(){

    int sum1 , sum2 , sum;

    printf("enter the first number: ");
    scanf("%d", &sum1);

    printf("enter the second number: ");
    scanf("%d", &sum2);

    sum=sum1 + sum2;
    printf("total number of two number %d", sum);
    return 0;
}