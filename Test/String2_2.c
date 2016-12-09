// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str[100][100] = {};
	int i = 0;
	int j = 0;

	for (i = 0; i < 100; i++)
	{
		scanf("%s", &str[i]);

		if (i % 2 == 0)
		{
			printf("%s\n", str[i]);
		}
	}





	system("pause");
	return 0;
}

