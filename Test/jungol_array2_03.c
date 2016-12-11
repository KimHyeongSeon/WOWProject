#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100] = { 100 };
	int i = 0;
	int j = 0;


	scanf("%d", &arr[1]);

	for (i = 2; i < 100; i++)
	{
		arr[i] = arr[i - 2] - arr[i - 1];

		if (arr[i] < 0)
		{
			for (j = 0; j <= i; j++)
			{
				printf("%d ", arr[j]);
			}
			break;
		}
	}




	system("pause");
	return 0;
}
