#include "stdio.h"
#define SIZE 5

int salary(int *A,int size);

void main()
{
  int a[SIZE] = { 200, 300, 400, 500, 600 };
  salary(&*a, SIZE);  
  
  printf("월급의 합%d \n", salary(&*a,SIZE));
}

int salary(int *A,int size)
{ 
  int i,sum=0; for (i = 0; i < SIZE; i++)  sum += A[i]; return sum;}
