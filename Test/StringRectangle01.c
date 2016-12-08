
#include "stdio.h"


int main()
{
	int i = 0;
	int j = 0;
	char ch = 'A';
	int num = 0;
	char arr[100][100] = {' '};

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
			else
			{
			}
		}			
	}



	for (i = num - 1; i >= 0; i--)
	{
		for (j = num - 1; j >= 0; j--)
		{
			printf("%c ", arr[j][i]);
		}
		puts("");
	}


}

