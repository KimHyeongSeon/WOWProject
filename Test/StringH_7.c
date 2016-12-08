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
	int j = 0;
	int count = 0;
	
	for (i = 0; i < 100; i++)
	{
		scanf("%c", &str[i]);

		if (str[i] == '\n')
		{
			break;
		}
	}


	count++;
	printf("%d. ", count);

	for (i = 0; i < 100; i++)
	{
		printf("%c", str[i]);

		if (str[i] == ' ')
		{
			count++;
			printf("\n%d. ", count);
		}
	}




	system("pause");
	return 0;
}

