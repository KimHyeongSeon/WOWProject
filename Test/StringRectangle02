#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i, j = 0;
	char arr[100][100];
	char ch = 'A';

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			arr[i][j] = ch++;

			if (ch == '[')
			{
				ch = 'A';
			}
		}
	}

	char temp;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num/2; j++)
		{
			if (i % 2 == 1)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i][num-j-1];
				arr[i][num-j-1] = temp;
			}
		}
	}

	for (j = 0; j < num; j++)
	{
		for (i = 0; i < num; i++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	

		



	system("pause");
	return 0;
}
