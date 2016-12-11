#include <stdio.h>
int main(void)
{ 
  char *pc;
  int *pi;
  double *pd;
  
  printf("pc의 크기 : %d\n", sizeof(pc));
  printf("pi의 크기 : %d\n", sizeof(pi));
  printf("pd의 크기 : %d\n", sizeof(pd));
  
  printf("char* 의 크기 : %d\n", sizeof(char*));
  printf("short* 의 크기 : %d\n", sizeof(short*)); printf("int* 의 크기 : %d\n", sizeof(int*)); printf("float* 의 크기 : %d\n", sizeof(float*)); printf("double*의 크기 : %d\n", sizeof(double*)); return 0;}
