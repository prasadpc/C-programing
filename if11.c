#include<stdio.h>

int main()
{
    int age;
    printf("welcome to RTO offices enter the your age");
    scanf("%d", &age);

    if ( age >=18){

        printf("your eligibale for licences");
    }
    else{

        printf(" you comple the 18 year after that apply to linces");
    }

    printf("your  age is %d", age);
    return 0;
    }