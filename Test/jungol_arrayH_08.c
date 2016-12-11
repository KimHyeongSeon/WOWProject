#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100];
	int i = 0;
	int j = 0;
	int count = 0;
	int sum = 0;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 0)
		{
			break;
		}

		if (arr[i] % 5 == 0)
		{
			count++;
			sum += arr[i];
		}
	}

	printf("5의 배수 : %d개\n", count);
	printf("합계 : %d\n", sum);
	printf("평균 : %.1lf\n", (double)sum / count);



	system("pause");
	return 0;
}
