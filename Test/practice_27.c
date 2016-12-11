#include <stdio.h>

int main()
{
  int num[5], i; 
  int *p;
  p = &num; 
  
  for (i = 0; i <= 4; i++)
  {
    scanf("%d", &num[i]);  
  }
  
  for (i = 0; i <= 4; i += 2) 
  { 
    printf("%d ", p[i]);
  } 
  
  return 0;
}
