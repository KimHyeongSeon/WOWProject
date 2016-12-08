// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char string[100] = {};
	int num = 0;
	int count = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < 100; i++)
	{
		scanf("%c", &string[i]);

		if (string[i] == ' ')
		{
			scanf("%d", &num);
			break;
		}
	}


	for (j = i - 1; j >= 0; j--)
	{
		if (count == num)
		{
			break;
		}
		printf("%c", string[j]);
		count++;
	}






	system("pause");
	return 0;
}

