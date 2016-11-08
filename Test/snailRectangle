
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100][100] = {};
	int num = 0;
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int a = 0;
	int b = 0;
	int input = 1;
	int count = 0;

	scanf("%d", &num);
	y = -1;
	count = 1;
	while (j < num)
	{
		for (i = 0; i < num - j; i++)
		{
			y++;
			arr[x][y] = input;
			input++;
		}
		count++;

		if (count == 2)
		{
			j++;
			count = 0;
		}

		for (i = 0; i < num - j; i++)
		{
			x++;
			arr[x][y] = input;
			input++;
		}
		count++;

		if (count == 2)
		{
			j++;
			count = 0;
		}

		for (i = 0; i < num - j; i++)
		{
			y--;
			arr[x][y] = input;
			input++;
		}
		count++;

		if (count == 2)
		{
			j++;
			count = 0;
		}

		for (i = 0; i < num - j; i++)
		{
			x--;
			arr[x][y] = input;
			input++;
		}
		count++;

		if (count == 2)
		{
			j++;
			count = 0;
		}
	}



	for (a = 0; a < num; a++)
	{
		for (b = 0; b < num; b++)
		{
			printf("%2d ", arr[a][b]);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}
