#include "stdafx.h"
#include "stdlib.h"
#include "math.h"
#define NUM 7


int main()
{
	int arr[NUM] = {};
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 3; i++)
	{

		for (j = 0; j < NUM - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < NUM; i++)
	{
		printf("%d ", arr[i]);
	}





	system("pause");
	return 0;
}
