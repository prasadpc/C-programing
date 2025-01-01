#include<stdio.h>
#include<math.h>

int main()
{
    float p, i, t;
    printf("Enter the principle amount");
    scanf("%f", &p);

    printf("Enter the interest rate: ");
    scanf("%f", &i);

    printf("Enter the Time");
    scanf("%f", &t);
    
    float compond = p * pow((1+ i/ 100),t);

    printf("This a compond interest: %f", compond);

    return 0;
    
    }