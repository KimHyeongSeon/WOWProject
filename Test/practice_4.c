#include<stdio.h>

int main(void)
{ 
  int num1 = 10, num2 = 20;
  int *pnum;
  pnum = &num1;
  (*pnum) += 20;
  pnum = &num2; 
  (*pnum) -= 20;
  
  printf("num1:%d, num2:%d \n", num1, num2);
  
  return 0;
}
