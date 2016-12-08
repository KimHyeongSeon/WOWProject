// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str[100] = {};
	int i = 0;
	int j = 0;
	int k = 0;
	int length = 0;

	scanf("%s", &str);
	length = strlen(str);

	for (k = 0; k < length; k++)
	{
		for (i = length - 1; i >= 0; i--)
		{
			str[i + 1] = str[i];
		}
		str[0] = str[length];

		for (j = 0; j < length; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}

