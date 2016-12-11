
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

		if (arr[i] == 0)
		{
			for (j = i - 1; j >= 0; j--)
			{
				printf("%d ", arr[j]);				
			}
			break;
		}
	}




	system("pause");
	return 0;
}
