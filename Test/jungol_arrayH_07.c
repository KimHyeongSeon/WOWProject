#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100] = {};
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int temp = 0;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 999)
		{
			break;
		}
	}

	for (j = 0; j < i; j++)
	{
		for (k = j; k < i; k++)
		{
			if (arr[j] < arr[k])
			{
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}

	printf("최대값 : %d\n", arr[i - 1]);
	printf("최소값 : %d", arr[0]);


	system("pause");
	return 0;
}
