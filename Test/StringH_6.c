// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

int main()
{
	char str[100] = {};
	int num = 0;
	int i = 0;
	int j = 0;

	scanf("%s", &str);

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num);

		if (num > 0)
		{
			num = num - 1;			
		}
		if (num >= strlen(str))
		{
			for (j = 0; j < 1; j++)
			{
				str[strlen(str) - 1] = str[strlen(str)];
			}
		}
		else
		{
			for (j = 0; j < strlen(str) - num; j++)
			{
				str[num + j] = str[num + 1 + j];
			}
		}
		printf("%s\n", str);
		if (strlen(str) == 1)
		{
			system("pause");
			return 0;
		}
	}
	





	system("pause");
	return 0;
}

