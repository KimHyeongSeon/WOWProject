#include "stdafx.h"
#include "stdlib.h"
#include "math.h"

void bubbleSet(int arr[10])
{
	int i = 0;
	int j = 0;
	int k = 0;
	int temp = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}			
		}
		for (k = 0; k < 10; k++)
		{
			printf("%d ", arr[k]);
		}
		printf("\n");

	}
}

int main()
{
	int num[10] = {};
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	
	bubbleSet(num);



	system("pause");
	return 0;
}
