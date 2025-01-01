#include<stdio.h>

int main()
{
    int one, two, three;

    printf("Enter the first number\n ");
    scanf("%d", &one);

    printf("Enter the second number\n");
    scanf("%d", &two);

    printf("Enter the Third number\n");
    scanf("%d", &three);     


    if(one > two && one >three){

        printf("%d the number is greatest", one);
     }else if(two > three)
     {
        printf("%d the number is greatest", two);
     }else{
        printf("%d the number is greatest", three);
     }

   return 0;
}