#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char str[100][100] = {};
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			scanf("%c", &str[i][j]);

			if (str[i][j] == '\n')
			{
				break;
			}
			if (str[i][j] == ' ')
			{
				break;
			}
		}
		if (str[i][j] == '\n')
		{
			str[i][j] = NULL;
			break;
		}
	}


	for (k = i; k >= 0; k--)
	{
		printf("%s\n", str[k]);
	}



	system("pause");
	return 0;
}
