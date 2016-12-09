// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str[10][20] = {};
	char selectStr = ' ';
	int i = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%s", &str[i]);
	}
	scanf(" %c", &selectStr);

	for (i = 0; i < 10; i++)
	{
		if (str[i][strlen(str[i]) - 1] == selectStr)
		{
			printf("%s\n", str[i]);
		}
	}





	system("pause");
	return 0;
}

