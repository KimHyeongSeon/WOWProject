
#include "stdafx.h"
#include "stdlib.h"

void GetSumProduct(int a, int b, int sum, int product);

int _tmain(int argc, _TCHAR* argv[])
{
	int number = 0;
	int sum = 0;

	do
	{
		scanf("%d", &number);
		if (number % 3 != 0)
		{
			continue;
		}
		sum = sum + number;

		if (number == 0)
		{
			break;
		}
	} while (1);
	{
		printf("입력한 배수의 총합은 %d 입니다.", sum);
	}



	system("pause");
	return 0;
}
