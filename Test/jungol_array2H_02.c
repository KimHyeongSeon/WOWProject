#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100] = {};
	int i = 0;
	int j = 0;
	int scoreCount[11] = {};

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 0)
		{
			break;
		}

		scoreCount[arr[i] / 10]++;
	}

	
	for (j = 10; j >= 0; j--)
	{
		if (scoreCount[j] > 0)
		{
			printf("%d점 이상 : %d명\n", j * 10, scoreCount[j]);
		}
	}
	



	system("pause");
	return 0;
}
