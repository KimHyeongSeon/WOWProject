#include <stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);
void multiply(double*, double, double);
void devide(double*, double, double);

int main(void)
{ 
   double m, n, result;
   int i;
   char op[4] = { '+', '-', '*', '/' };
   void(*fpary[4])(double*, double, double) = { add, subtract, multiply, devide };
   
   printf("사칙연산을 수행할 실수 2개를 입력하세요. >> ");
   scanf("%lf %lf", &m, &n);
   
   for (i = 0; i < 4; i++) 
   {  
      fpary[i](&result, m, n); 
      printf("%.2lf %c %.2lf == %.2lf\n", m, op[i], n, result);
   } 
   
   return 0;
   }
   
void add(double *z, double x, double y)
{ 
   *z = x + y; 
}

void subtract(double *z, double x, double y)
{ 
   *z = x - y;
}

void multiply(double *z, double x, double y)
{
   *z = x * y;
}

void devide(double *z, double x, double y)
{ 
   *z = x / y;
}
