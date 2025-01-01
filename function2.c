#include<stdio.h>

int sum(int a, int b);

int main( )
{
    // int x, y, summ;
    printf("enter the number: ");
    // scanf("%d %d", &x, &y);
   int summ = sum (43, 43);
    printf("sum is %d", summ);
    return 0;


}

int sum(int a, int b)
{
    int sum;

    sum = a + b;

    return ( sum);
}