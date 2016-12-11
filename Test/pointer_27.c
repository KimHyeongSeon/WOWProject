#include "stdio.h"

int main(void)
{ 
  int j;
  scanf("%d", &j);
  
  float  a[1000], number1=0;
  float *p;
  
  for (int i = 0; i < j; i++) 
  {  
    scanf("%f", &a[i]);
  }
  
  p = &a[0];
  
  for (int i = 0; i < j; i++)
  { 
    number1 += *(p + i); 
    
    printf("%.2f ", *(p + i));
  } 
  
  printf("\n합계 : %.2f\n", number1);
  printf("평균 : %.2f", number1 / j); 

  return 0;
}
