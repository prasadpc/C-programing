#include<stdio.h>

int main()
{
 
 int first, second;
 char ope;

 printf("Enter the First number");
 scanf("%d", &first);
  
 printf("Enter the Scond number");
 scanf("%d", &second);

 printf("Choice the Corrct operater like add, sub, mul, div");
 scanf("%c", &ope);

 switch(ope){

  case '+': printf("%d this addision of two number", first + second);
  break;

  case '-': printf("%d this substriction of two number", first - second);
  break;

  case '*': printf("%d this multipliction of two number", first * second);
  break;

  case '/': printf("%d this division of two number", first / second);
  break;

  default : printf("you enter the wrong the input");
  break;

  return 0;

 }




}