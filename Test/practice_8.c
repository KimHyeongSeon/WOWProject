#include<stdio.h>
#include<stdlib.h>

int check(int *a);

int main()
{ 
  int a[13];
  int i = 0;
  int result;
  
  printf("Please type ISBN number\n");
  
  for (i = 0; i < 13; i++) 
    scanf("%d", &a[i]);
  
  result = check(a);
  
  if (result == 1)
    printf("It is valid number");
  else if (result == 0) 
    printf("It is not valid number");
  
  system("pause"); 
  
  return 0;
}

int check(int *a)
{
  int result1, result2, result3;
  int i = 0;
  
  for (i = 0; i < 13; i = i + 2)
    result1 += a[i];
  for (i = 1; i < 13; i = i + 2)  
    result2 += a[i];
  result3 = result1 + result2;
  
  if (result3 % 10 == 0)  
    result3 = 1;
  else 
    result3 = 0;
  
  return result3;
}
