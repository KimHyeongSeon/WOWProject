// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str[20] = {};

	scanf("%s", &str);

	

	printf("%s", strcat(str, "fighting"));




	system("pause");
	return 0;
}

