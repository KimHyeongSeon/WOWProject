// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char str = {};
	int i = 0;

	while (1)
	{
		scanf(" %c", &str);

		if (str >= 48 && str <= 57)
		{
			printf("%d\n", str);
		}
		else if (str >= 65 && str <= 90)
		{
			printf("%c\n", str);
		}
		else if (str >= 97 && str <= 122)
		{
			printf("%c\n", str);
		}
		else
		{
			return 0;
		}
	}
	






	system("pause");
	return 0;
}

