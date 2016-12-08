#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i, j = 0;
	int k = 1;
	int arr[100][100] = {};

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i % 2 == 0)
			{
				arr[j][i - j] = k++;
			}
			else
			{
				arr[i - j][j] = k++;
			}
		}
	}

	if (num % 2 == 0)
	{
		for (i = 1; i < num; i++)
		{
			for (j = 0; j < num - i; j++)
			{
				if (i % 2 == 0)
				{
					arr[num - 1 - j][i + j] = k++;					
				}
				else
				{
					arr[i + j][num - 1 - j] = k++;
				}
			}
		}
	}
	else
	{
		for (i = 1; i < num; i++)
		{
			for (j = 0; j < num - i; j++)
			{
				if (i % 2 == 0)
				{
					arr[i + j][num - 1 - j] = k++;
				}
				else
				{
					arr[num - 1 - j][i + j] = k++;
				}
			}
		}
	}










	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
