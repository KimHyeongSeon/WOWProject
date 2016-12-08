// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str[3][100] = {};
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int count = 0;
	char temp[100] = " ";

	for (i = 0; i < 3; i++)
	{
		scanf("%s", &str[i]);
	}

	for (j = 1; j < 3; j++)
	{
		for (k = 0; k < 100; k++)
		{
			if (str[0][k] > str[j][k])
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[0]);
				strcpy(str[0], temp);
				break;
			}
			else if (str[0][k] < str[j][k])
			{
				break;
			}
		}
	}
	
	printf("%s", str[0]);


	system("pause");
	return 0;
}

