#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100] = {};
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 0)
		{
			break;
		}
	}

	printf("%d개\n", i);
	
	
	for (j = 0; j < i; j++)
	{
		if (arr[j] % 2 == 0)
		{
			printf("%d ", arr[j] / 2);
		}
		else
		{
			printf("%d ", arr[j] * 2);
		}
	}
	



	system("pause");
	return 0;
}
