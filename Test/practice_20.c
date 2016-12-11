#include <stdio.h>

int main(void)
{
  char *pc = (char*)100;
  int *pi = (int*)100;
  double *pd = (double*)100;
  
  printf("%u %u %u\n", pc - 1, pc, pc + 1);
  printf("%u %u %u\n", pi - 1, pi, pi + 1); printf("%u %u %u\n", pd - 1, pd, pd + 1); return 0;}
