#include<stdio.h>

int main()
{
    FILE *ptr;
    //char text[100];

    // ptr =fopen("fq.txt", "r"); is used for the wrtieng the data to the file
     
     ptr = fopen("file.txt", "w");
      if(ptr == NULL){

        printf("the file coldt not open");
       
        return 1;
    }

    // fgets(text,100, ptr); fgets ts function is used for the writing the data
    // printf("%s", text);
      
      fprintf(ptr, "this the demo of the file oprtaing ");
    

    


    return 0;
}