#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char str[50][100] = {};
	int i = 0;
	int j = 0;
	
	for (i = 0; i < 50; i++)
	{
		scanf("%s", &str[i]);
		
		if (str[i][0] == '0')
		{
			break;
		}
	}

	printf("%d\n", i);
	
	for (j = 0; j < i; j++)
	{
		printf("%s\n", str[j]);
		j++;
	}






	system("pause");
	return 0;
}
