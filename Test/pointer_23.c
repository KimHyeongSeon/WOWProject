#include <stdio.h>          

int main()
{ 
  int arr[5] = { 1,2,3,4,5 };
  int *p = &arr[0];
  int i;
  
  for (i = 0; i < 5; i++) 
  {  
    printf("&arr[%d] = %p, ", i, &arr[i]);
    printf("arr + %d = %p\n", i, arr + i);
  }
  
  for (i = 0; i < 5; i++)
  {  
    printf("arr[%d] = %d, ", i, arr[i]);
    printf("*(arr+%d) = %d\n", i, *(arr + i));
  }
  
  return 0;
}
