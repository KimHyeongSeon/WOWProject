#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[10] = {};
	int count[6] = {};
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] == 1)
		{
			count[0]++;
		}
		else if (arr[i] == 2)
		{
			count[1]++;
		}
		else if (arr[i] == 3)
		{
			count[2]++;
		}
		else if (arr[i] == 4)
		{
			count[3]++;
		}
		else if (arr[i] == 5)
		{
			count[4]++;
		}
		else if (arr[i] == 6)
		{
			count[5]++;
		}
	}

	for (j = 0; j < 6; j++)
	{
		printf("%d : %d번\n", j + 1, count[j]);
	}





	system("pause");
	return 0;
}
