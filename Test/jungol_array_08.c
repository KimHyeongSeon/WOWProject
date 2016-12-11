
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sumEven = 0; // 짝수
	int sumOdd = 0; // 홀수

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	sumEven = arr[1] + arr[3] + arr[5] + arr[7] + arr[9];
	sumOdd = arr[0] + arr[2] + arr[4] + arr[6] + arr[8];

	printf("짝수번째 합 : %d\n", sumEven);
	printf("홀수번째 평균 : %.1lf", (double)sumOdd / 5);

	system("pause");
	return 0;
}
