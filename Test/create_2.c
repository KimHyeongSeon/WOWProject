// string.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int num = 0;

	while (1)
	{
		printf("아스키 코드 =? ");
		scanf("%d", &num);


		if (num < 33 || num > 127)
		{
			return 0;
		}

		printf("%c\n", num);

	}

	 


	system("pause");
    return 0;
}

