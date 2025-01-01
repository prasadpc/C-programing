#include<stdio.h>

int main()
{

    int age;
    printf("enter the your age: ");
    scanf("%d", &age);

    if(age <18)
    {
        printf("your the not eligible for the lincens ");
    }

    else if (age >=70)
    {
        printf("you are the senior your age ");
    }
    else{
        printf("your the eligibale for the lincencens");
    }
    
}