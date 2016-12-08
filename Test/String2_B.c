#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	int n = 0;
	int i, j, k = 0;
	char arr[100][100] = {};
	char temp[100] = {};

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%c", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{		
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (arr[i][k] > arr[i + 1][k])
				{
					strcpy(temp, arr[i]);
					strcpy(arr[i], arr[i + 1]);
					strcpy(arr[i + 1], temp);
					break;
				}
			}
		}
	}


	for (i = 0; i < n; i++)
	{
		printf("%c", arr[i]);
	}
	




	system("pause");
	return 0;
}
