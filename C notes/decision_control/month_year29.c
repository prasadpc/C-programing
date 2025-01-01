#include<stdio.h>

int main(){

    int number;

    printf("Enter the Month number:");
    scanf("%d", &number);

    switch (number)
    {
    case 1:  printf("january");
        break;

    case 2: printf("febury");
         break;

    case 3: printf("march");
    break;

    case 4: printf("April");
    break;

    case 5: printf("may");
    break;

    case 6: printf("june");
    break;

    case 7: printf("july");
    break;

    case 8: printf("Auste");
    break;

    case 9: printf("september");
    break;

    case 10: printf("octomber");
    break;

    case 11: printf("november");
    break;

    case 12: printf("december");
    break;



    default: printf("you enter 1-12  number");
        break;
    }

    return 0;
}