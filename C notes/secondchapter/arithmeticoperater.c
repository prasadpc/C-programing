#include<stdio.H>

int main(){

    int first, second;
    printf("enter the first number");
    scanf("%d", &first);

    printf("Enter the Seconfd number");
    scanf("%d",&second);


    printf("arithmetic of two number is %d \n", first + second);
    printf("substrction of two number is %d \n", first - second);
    printf("multipliction of two number is %d \n", first * second);
    printf( "divistion of two number is %d \n", first / second );
    printf( " moduler is of two number is %d \n", first % second);

    return 0;
}