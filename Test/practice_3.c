#include<stdio.h>

int main(void)
{
  int arr[3] = { 10,20,30 };
  int *ptr = arr;
  
  printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); 
  printf("%d\n", *ptr);
  ptr++;
  printf("%d\n", *ptr);
  ptr++; 
  printf("%d\n", *ptr);
  ptr--; 
  printf("%d\n", *ptr);
  ptr--;
  
  return 0;
}
