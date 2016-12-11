
#include "stdafx.h"
#include "stdlib.h"

void GetSumProduct(int a, int b, int sum, int product);

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int sum = 0;

	i = 1;
	do
	{
		printf("%d ", i++);
		printf("\n");
		sum = sum + i;
	} while (i <= 100);

	printf("합계는? : %d", sum);




	system("pause");
	return 0;
}
