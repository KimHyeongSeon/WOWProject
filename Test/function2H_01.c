#include "stdafx.h"
#include "stdlib.h"

void treeSet(int arr[15], int x)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < x; i++)
	{
		for (j = i; j < x; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[15] = {};
	int N = 0;
	int i = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]); 
	}

	treeSet(arr, N);



	system("pause");
	return 0;
}
