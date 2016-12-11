#include <stdio.h>

int main(void)
{
  int arr[5] = { 10, 20, 30, 40, 50 }; int *p = &arr[0]; int i; for (i = 0; i < 5; i++, p++)  printf("%d\n", *p); return 0;}
