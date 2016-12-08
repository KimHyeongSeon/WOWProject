// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str1[100] = {};
	char str2[100] = {};
	int i = 0;
	int j = 0;

	scanf("%s %s", &str1, &str2);

	for (i = 0; i < 2; i++)
	{
		printf("%c", str1[i]);
	}
	for (j = 2; j < strlen(str2); j++)
	{
		printf("%c", str2[j]);
	}
	for (i = 0; i < 2; i++)
	{
		printf("%c", str1[i]);
	}



	system("pause");
	return 0;
}

