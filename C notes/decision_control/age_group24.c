#include<stdio.h>

int main()
{

 int age;

 printf("Enter the Your AGE:");
 scanf("%d", &age);

 if(age <=0 || age >=130){

    printf("you Enter the Wrong age");
 }else if( age <=13){

    printf("Your Child");
 }else if(age <=21){
    printf("Your the Teen");
 }else if(age <=60){

    printf("Your Adult");
 }else{
    printf("Your Senior");
 }

// printf("The happy");

}