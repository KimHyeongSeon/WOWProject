#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[5][4] = {};
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int n = 0;
	int student[5] = {};
	int successCount = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
			student[i] += arr[i][j];
		}
	}

	for (k = 0; k < 5; k++)
	{
		if (student[k] / 4 >= 80)
		{
			printf("합격\n");
			successCount++;
		}
		else
		{
			printf("불합격\n");
		}
	}

	printf("합격자 %d명", successCount);



	system("pause");
	return 0;
}
