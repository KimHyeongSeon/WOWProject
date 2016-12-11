#include <stdio.h>

int main(void)
{
  int foo[] = { 519, 31, 7988, 165326, 10, -24642, 134 };  printf("%d\n", sizeof(foo));   printf("%d\n", sizeof(foo) / sizeof(foo[0]));   return 0;}
