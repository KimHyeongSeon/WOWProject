#include <stdio.h>

int main()
{ 
  int x, y;
  int *p1, *p2;
  p1 = &x, p2 = &y;
  
  scanf_s("%d %d", &x, &y); 
  printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
  printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2);
  printf("%d * %d = %d\n", *p1, *p2, *p1 * *p2); 
  printf("%d / %d = %d\n", *p1, *p2, *p1 / *p2);
  
  return 0;
}
