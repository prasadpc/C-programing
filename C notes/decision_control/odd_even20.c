#include<stdio.h>

int main()
{
  int num;
  printf("Enter the number");
  scanf("%d", &num);

  if(num%2==0)
  {
    printf("This is Even number");

  }else{

    printf("This is  Odd number");
  }

  return 0;

}