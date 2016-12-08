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

	scanf("%s %s", &str1, &str2);

	if (strlen(str1) > strlen(str2))
	{
		printf("%d", strlen(str1));
	}
	else
	{
		printf("%d", strlen(str2));
	}

	system("pause");
	return 0;
}
