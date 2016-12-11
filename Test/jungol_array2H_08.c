#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[4][2] = {};
	int sum[4] = {};
	int sumAll = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &arr[i][j]);
			sum[i] += arr[i][j];
			sumAll += arr[i][j];
		}
	}

	printf("가로평균 ");
	for (k = 0; k < 4; k++)
	{
		printf("%d ", sum[k] / 2);
	}
	printf("\n세로평균 %d %d\n", (arr[0][0] + arr[1][0] + arr[2][0] + arr[3][0]) / 4, (arr[0][1] + arr[1][1] + arr[2][1] + arr[3][1]) / 4);
	printf("전체평균 %d", sumAll / 8);




	system("pause");
	return 0;
}
