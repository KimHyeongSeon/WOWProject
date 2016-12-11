#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[5] = {};
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("%d", arr[0] + arr[2] + arr[4]);


	system("pause");
	return 0;
}
