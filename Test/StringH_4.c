// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str[100] = {};
	char selectStr = ' ';
	int i = 0;
	int no = 0;

	scanf("%s %c", &str, &selectStr);

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == selectStr)
		{
			printf("%d", i);
			no++;
			break;
		}
	}
	if (no == 0)
	{
		printf("No");
	}


	system("pause");
	return 0;
}
