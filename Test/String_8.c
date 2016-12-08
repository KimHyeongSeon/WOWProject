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
	int count = 0;

	while (i <= 100)
	{
		scanf("%c", &str[i]);
		if (str[i] == '\n')
		{
			break;
		}
		else if (str[i] == ' ')
		{
			count++;
		}
	}

	printf("%d", count + 1);



	system("pause");
	return 0;
}

