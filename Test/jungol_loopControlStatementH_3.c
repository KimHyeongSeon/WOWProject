#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int sum = 0;
	int count = 0;

	while (1)
	{
		scanf("%d", &num);

		if (num >= 0 && num <= 100)
		{
			count++;
			sum = sum + num;
		}
		else
		{
			printf("합계 : %d점\n평균 : %.1lf점", sum, (double)sum / count);
			break;
		}

	}


	system("pause");
	return 0;
}
