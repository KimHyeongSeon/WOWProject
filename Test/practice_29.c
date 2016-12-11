#include <stdio.h>

int main()
{
  double num[100] = { 0 }, sum = 0, average = 0;
  int i, length; 
  double *p; p = &num;  
  
  scanf_s("%d", &length);
  
  for (i = 0; i <= length - 1; i++)
  {
    scanf_s("%lf", &p[i]);
    sum += num[i]; 
  }
  
  average = sum / length;
  
  for (i = 0; i <= length - 1; i++)
  {
    printf("%.2lf ", p[i]);
  }
  
  puts(""); 
  printf("합계 : %.2lf\n평균 : %.2lf\n", sum, average); 
  
  return 0;}
