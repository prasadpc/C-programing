#include<stdio.h>

// int fun(int);

// int main(){

// int a=30;
// fun();
// printf("sum is: %d", a);

// return 0;

// }

// int fun (int b)
// {
//      b= 60;
//     printf("sume is secomd : %d", b);
// }



void fun ( int ) ; 
int main( ) 
{ 
 int  a = 30 ; 
 
 fun ( a ) ; 
 printf ( "%d\n", a ) ; 
 return 0 ; 
} 
void fun ( int  b ) 
{ 
 int y = 60 ; 
 printf ( "%d\n", y ) ; 
 printf ( "%d\n", b ) ;

 return y; 
} 