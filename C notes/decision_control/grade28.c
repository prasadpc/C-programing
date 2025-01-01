#include<stdio.h>

int main()
{
  int marks;
  printf("Enter the marks");
  scanf("%d", &marks);

  marks >= 80  ? printf("high")
              : marks >=50 ? printf("medium")
              : printf("low");

}