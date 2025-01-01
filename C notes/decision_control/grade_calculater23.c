#include<stdio.h>

int main()
{
    int grade;

    printf("Enter the marks:");
    scanf("%d", &grade);
    

     if(grade <=0 || grade >=101){

        printf("You enter the Wrong Answer");
    }else if(grade >=90 && grade <=100 ){

        printf("Your grade is A ");

    }else if(grade >75){

        printf(" Your gread is B");

    }else if(grade >50){

        printf("your gread is C");
    }else if(grade >35){
        printf("Your gread is D ");

    }else{
        printf("Your are failed");
    }




}