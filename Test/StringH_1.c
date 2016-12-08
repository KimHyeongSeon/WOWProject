// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str1 = {};
	char str2 = {};

	scanf("%c %c", &str1, &str2);

	printf("%d %d", str1 + str2, abs(str1 - str2));






	system("pause");
	return 0;
}
