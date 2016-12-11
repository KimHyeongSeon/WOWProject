
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int j = 0;
	int k = 0;
	int hundredUpMin = 10000;
	int hundredDownMax = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (j = 0; j < 10; j++)
	{
		if (arr[j] > 100 && arr[j] < hundredUpMin)
		{
			hundredUpMin = arr[j];
		}
	}

	for (k = 0; k < 10; k++)
	{
		if (arr[k] < 100 && hundredDownMax < arr[k])
		{
			hundredDownMax = arr[k];
		}
	}

	if (hundredDownMax < 1)
	{
		hundredDownMax = 100;
	}
	if (hundredUpMin > 9999)
	{
		hundredUpMin = 100;
	}
	

	printf("%d %d", hundredDownMax, hundredUpMin);

	system("pause");
	return 0;
}
