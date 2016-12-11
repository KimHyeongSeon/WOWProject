#include "stdio.h"
#define SIZE 5

void salary(const int *A, const int *B,int *C,int size);

void main()
{
  int a[SIZE] = { 200, 300, 400, 500, 600 };
  int b[SIZE] = { 30,60,90,120,150 };
  int c[SIZE];
  int j; 
  
  salary(&*a, &*b, &*c, SIZE);
  
  printf("월급의 총액\n");
  
  for (j = 0; j < SIZE; j++) {  printf("직원 %d %3d\n", j + 1, c[j]); }}void salary(const int *A, const int *B, int *C, int size){ int i; for (i = 0; i < SIZE; i++)  C[i] = A[i] + B[i];}
