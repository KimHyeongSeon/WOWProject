#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[20] = {};
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int temp = 0;
	int num = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (j = 0; j < num; j++)
	{
		for (k = j; k < num; k++)
		{
			if (arr[j] < arr[k])
			{
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}


	for (m = 0; m < num; m++)
	{
		printf("%d\n", arr[m]);
	}






	system("pause");
	return 0;
}
