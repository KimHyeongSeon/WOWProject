#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i, j = 0;
	char arr[100][100] = {};
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


	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			printf("**");


		}

		printf("%c", arr[i][j]);

		

		printf("\n");
	}

	for (i = 0; i < num - 1; i++)
	{
		for (j = i; j >= 0; j--)
		{
			printf("**");
		}

		printf("%c", arr[i][j]);



		printf("\n");
	}







	system("pause");
	return 0;
}
