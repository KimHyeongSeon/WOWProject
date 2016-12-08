// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str[5][30] = {};
	int i = 0;
	int j = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%s", &str[i]);
	}

	for (i = 4; i >= 0; i--)
	{
		printf("%s", str[i]);

		printf("\n");
	}



	system("pause");
	return 0;
}

