#include <stdio.h>
void add(double*, double, double);
void subtract(double*, double, double);

int main(void)
{ 
   double m, n, result = 0;
   void(*pf)(double*, double, double) = NULL;
   
   printf("+, -를 수행할 실수 2개를 입력하세요. >> ");
   scanf("%lf %lf", &m, &n); pf = add; pf(&result, m, n);
   
   printf("pf = %p, 함수 add() 주소 = %p\n", pf, add);
   printf("더하기 수행 : %lf + %lf == %lf\n\n", m, n, result);
   
   pf = subtract; pf(&result, m, n);
   
   printf("pf = %p, 함수 subtract() 주소 = %p\n", pf, subtract);
   printf("빼기 수행 : %lf - %lf == %lf\n\n", m, n, result);
   
   return 0;  
}
   
void add(double *z, double x, double y)
{ 
   *z = x - y;
}
void subtract(double *z, double x, double y)
{
   *z = x - y;
}
