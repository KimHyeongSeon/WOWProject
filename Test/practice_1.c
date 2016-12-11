#include <stdio.h>

void get_array(int a[], int size);
void prt_array(int a[], int size);
#define SIZE 10

int main()
{  
  int a[SIZE];   
  get_array(a, SIZE);  
  prt_array(a, SIZE); 
  
  printf("\n"); 
  
  return 0
}

void get_array(int a[], int size)
{  
  int i; 
  
  printf("10개의 값을 입력하세요, 한개 입력할때마다 엔터\n " ); 
  
  for (i = 0; i < size; i++)        scanf("%d", &a[i]);}void prt_array(int a[], int size){    int i;    printf("모든값들 :\n");    for (i = 0; i < size; i++)        printf("%d\n", a[i]);}
