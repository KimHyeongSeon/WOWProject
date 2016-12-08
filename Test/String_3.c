// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char string[100] = "Hong Gil Dong";
	int i = 0;

	for (i = 3; i <= 6; i++)
	{
		printf("%c", string[i]);
	}





	system("pause");
	return 0;
}

