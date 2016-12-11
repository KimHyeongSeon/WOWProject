#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[10] = {};
	int i = 0;
	int j = 0;

	scanf("%d%d", &arr[0], &arr[1]);

	for (i = 2; i < 10; i++)
	{
		arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		printf("%d ", arr[j]);
	}

	system("pause");
	return 0;
}
