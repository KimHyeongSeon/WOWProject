#include <stdio.h>

void rectangle(int a, int b, int * area, int * perim);

int main()
{
  int x, y;    int area, perim;    printf("2개의 값을 입력하세요 띄어쓰기하여서 " );    scanf("%d %d", &x, &y);    rectangle(x, y, &area, &perim);    printf("넓이는 %d 둘레는 %d\n", area, perim);    return 0;}void rectangle(int a,int b,int * area,int * perim){    *area = a * b;    *perim = 2 * (a + b);}
