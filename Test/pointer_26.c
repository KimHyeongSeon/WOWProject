#include "stdio.h"

int main(void)
{ 
  float  a[5], number1;
  float *p =0;
  
  for (int i = 0; i < 5; i++)
  { 
    scanf("%f\n", &a[i]);
  } 
  
  p = &a[0];
  
  printf("%.1f %.1f %.1f %.1f %.1f", *p,*(p+1), *(p + 2) , *(p + 3),*(p + 4));
  
  return 0;
}
