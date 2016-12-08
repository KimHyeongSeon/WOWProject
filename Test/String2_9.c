#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char str[5][20] = {};
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int n = 0;
	char temp[20] = {};

	for (i = 0; i < 5; i++)
	{
		scanf("%s", &str[i]);
	}

	for (k = 0; k < 5; k++)
	{
		for (m = 0; m < 5; m++)
		{
			for (j = 0; j < 20; j++)
			{
				if (str[k][j] > str[m][j])
				{
					strcpy(temp, str[k]);
					strcpy(str[k], str[m]);
					strcpy(str[m], temp);
					break;
				}
				else
				{
					break;
				}
			}
		}
	}
	
	
	for (n = 0; n < 5; n++)
	{
		printf("%s\n", str[n]);
	}


	system("pause");
	return 0;
}
