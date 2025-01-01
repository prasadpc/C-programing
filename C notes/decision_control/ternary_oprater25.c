#include<stdio.h>

int main(){

    int first, second;

    printf("Enter the first number");
    scanf("%d", &first);

    printf("Enter The Second Number:");
    scanf("%d", &second);

    int min = first < second ? first : second;

    printf("This a two number minimum %d", min);

}