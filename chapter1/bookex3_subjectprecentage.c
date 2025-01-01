#include<stdio.h>

int main()
{

    int sub_1, sub_2,sub3, sub4, sub5, total ;
    

    printf("Enter the marke of five subject \n");
    scanf("%d %d %d %d %d", &sub_1, &sub_2, &sub3, &sub4, &sub5);

    total=( sub_1+ sub_2+ sub3 +sub4 +sub5) / 5; 


    printf("The total precentage of five subject pracentage %d \n",total);


}