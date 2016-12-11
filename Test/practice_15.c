#include <stdio.h>   

typedef struct point
{ 
  int x;
  int y;
} POINT;

void PrintPoint(POINT *p);

int main(void)
{
  POINT pt1 = { 100, 200 };
  PrintPoint(&pt1);
  
  return 0;
}

void PrintPoint(POINT *p){ printf("(%d, %d)\n", p->x, p->y);}
