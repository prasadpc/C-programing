#include<stdio.h>
 int main(){

    int p, y;
    float i, si;

  printf("enter the principle \n");
  scanf("%d", &p);
  printf("enter the year \n");
  scanf("%d", &y);
  printf("enter the interate");
  scanf("%f", &i);
    si=p * y * i / 100;

    printf("%f simple intersate", si);
    return 0;

 }