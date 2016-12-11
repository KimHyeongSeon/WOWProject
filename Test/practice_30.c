#include <stdio.h>

int main()
{
  int input, i;
  int *p;
  p = &input;
  
  scanf("%d", &input); 
  
  for (i = 1; i <= *p; i++) 
  {
    printf("*");
  }
  
  return 0;
}
