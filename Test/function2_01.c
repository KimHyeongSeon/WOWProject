#include "stdafx.h"
#include "stdlib.h"

void treeSet(int num, int arr[10])
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < num; i++)
	{
		for (j = i; j < num; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		printf("%d ", arr[i]);
	}
}


int main()
{
	int arr[10] = {};
	int num = 0;
	int i = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}

	treeSet(num, arr);





	system("pause");
	return 0;
}
