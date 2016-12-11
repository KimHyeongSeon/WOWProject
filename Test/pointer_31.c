#include "stdio.h"
#define SIZE 5

void _array(int *A, int *B, int size);
void main()
{
  int a[SIZE] = { 1, 2, 3, 4, 5 };
  int b[SIZE];
  int j;
  _array(&*a, &*b, SIZE);
  
  printf("A배열\n");
  
  for (j = 0; j < SIZE; j++) {  printf("%3d", a[j]); } printf("\nB배열\n"); for (j = 0; j < SIZE; j++) {  printf("%3d", b[j]); }}void _array(int *A, int *B, int size){ int i; for (i = 0; i < size; i++)  B[i] = A[i];}
