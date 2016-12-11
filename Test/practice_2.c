#include <stdio.h>

int main()
{   
  int array[3] = {45, 67, 89}; 
  
  printf ("%p\n", array); 
  printf ("%p\n", & array); 
  printf ("%p\n", & array[0]); 
  
  return 0;
}
