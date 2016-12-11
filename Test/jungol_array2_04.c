#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[3][5] = { {5, 8, 10, 6, 4} , {11, 20, 1, 13, 2} , {7, 9, 14, 22, 3} };
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d   ", arr[i][j]);
		}
		printf("\n");
	}




	system("pause");
	return 0;
}
