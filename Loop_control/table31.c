#include<stdio.h>

int main(){

    int a, b;

    printf("Enter the number");
    scanf("%d", &a);
     

     b=1;
     while (b <=10)
     {
        printf("\n %d X %d = %d", a, b, a*b);

        b++;
     }
     
    return 0;
}