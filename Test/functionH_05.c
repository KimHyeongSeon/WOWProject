#include "stdafx.h"
#include "stdlib.h"

void sum(int arr[3][3])
{
	int i = 0;
	int j = 0;
	int sum[3] = {};
	int sumLength[4] = {};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
			sum[i] += arr[i][j];
		}
		printf("%d\n", sum[i]);
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sumLength[i] += arr[j][i];
		}
		sumLength[3] += sum[i];
	}

	printf("%d %d %d %d", sumLength[0], sumLength[1], sumLength[2], sumLength[3]);
}


int main()
{
	int student[3][3] = {};
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &student[i][j]);
		}
	}

	sum(student);


	system("pause");
	return 0;
}
