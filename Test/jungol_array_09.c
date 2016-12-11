
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[10] = {};
	int temp = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (arr[j] > arr[k])
			{
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}

	for (m = 0; m < 10; m++)
	{
		printf("%d ", arr[m]);
	}




	system("pause");
	return 0;
}
