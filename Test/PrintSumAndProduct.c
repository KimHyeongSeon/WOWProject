#include "stdafx.h"
#include "stdlib.h"

void PrintSumAndProduct(int a, int b)
{
	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d*%d=%d\n", a, b, a*b);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y;
  
	PrintSumAndProduct(10, 20);
	printf("정수를 입력하세요 :");
	scanf("%d %d", &x, &y);
	PrintSumAndProduct(x, y);

	system("pause");
	return 0;
}
