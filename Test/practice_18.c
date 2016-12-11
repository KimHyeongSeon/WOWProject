#include <stdio.h>

int main()
{
  int array[2][3][4] = {  {{1,  2,  3,  4},   {5,  6,  7,  8},    {9,  10, 11, 12},},  {{13, 14, 15, 16},   {17, 18, 19, 20},    {21, 22, 23, 24},}, }; 
  int (*ptr1)[4] = array[0];
  int *ptr2 = array[0][1];
  int i; 
  
  for(i=0; i<4; i++)
    printf("%d\t", ptr1[1][i]);
  
  puts("");
  
  for(i=0; i<4; i++)  
    printf("%d\t", ptr2[i]);
  
  puts("");
  printf("%d\n", sizeof(array)/sizeof(int));
  printf("ptr1: 0x%x, ptr2: 0x%x\n", ptr1, ptr2);
  printf("ptr1: 0x%x, ptr2: 0x%x\n", ptr1[1], &(ptr2[1]));
  printf("ptr1: 0x%x, ptr2: 0x%x\n", &(ptr1[1][1]), &(ptr2[1]));
  printf("ptr1: 0x%x, ptr2: 0x%x\n", ++ptr1, ++ptr2); 
  
  return 0;}
