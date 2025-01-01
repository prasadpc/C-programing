#include<stdio.h>


int fun(int );

int main(){

    int i = 20;
    fun(i);
    return 0;
}


int fun(int j){

    int y = 30;
    printf("value of j : %d", j);
    printf("the value of y: %d", y);
}