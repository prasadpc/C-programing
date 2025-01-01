#include<stdio.h>

int fun(a);

int main()
{
    fun();
    return 0;
}

int fun(a){
    a=1;

        printf("%d %d %d \n", a, ++a, a++);
}