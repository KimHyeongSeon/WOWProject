
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[10] = {};
	int i = 0;
	int min = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}


	min = arr[0];

	for (i = 0; i < 10; i++)
	{
		if (arr[i] <= min)
		{
			min = arr[i];
		}
	}
	printf("%d", min);


	system("pause");
	return 0;
}
