#include<stdio.h>
int main()
{
    int age;
    char name[10], last_name[10];

    printf("Enter the your Name \n ");
    scanf("%s", name);
    printf("Enter your Last name");
    scanf("%s", last_name);

    printf("Enter the your age");
    scanf("%d", &age);

    printf("your Name %s \n", name);
    printf("your last_name is %s \n", last_name);
    printf("your age is %d", age);
}