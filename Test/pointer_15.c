#include <stdio.h>  

void Swap(int *x, int *y);

int main()
{
   int a = 10; 
   int b = 20;
   
   printf("Swap 전의 a = %d, b = %d\n", a, b);
   
   Swap(&a, &b); 
   
   printf("Swap 후의 a = %d, b = %d\n", a, b); 
   
   return 0;
}

void Swap(int *x, int *y)
{
   int temp;
   
   temp = *x;
   *x = *y;
   *y = temp;
}
