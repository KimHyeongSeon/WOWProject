#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main(void)  
{  
   int i,size;
   int *score;
   score = (int*)malloc(sizeof(int)*SIZE);
   
   for(i = 0; i<SIZE;i++) 
      *(score+i) = i+1;
   
   size = sizeof(int)*SIZE / sizeof(int);
   
   for(i = 0; i<size; i++)     
      printf("score[%d] = %d\n",i,*(score+i));
      
   return 0;
}
