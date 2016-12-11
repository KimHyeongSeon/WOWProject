#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100] = {};
	int i = 0;
	int j = 0;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == -1)
		{
			if (i < 3)
			{
				for (j = 0; j < i; j++)
				{
					printf("%d ", arr[j]);					
				}
				return 0;
			}
			printf("%d %d %d", arr[i - 3], arr[i - 2], arr[i - 1]);
			break;
		}
	}



	system("pause");
	return 0;
}
