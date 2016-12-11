#include <stdio.h>   

int main()
{ 
  int arr[5] = {1, 2, 3, 4, 5};
  int *p = &arr[0];
  int i;
  
  for (i = 0; i < 5; i++, p++)
    printf("%d\n", *p);
  
  return 0;
}
