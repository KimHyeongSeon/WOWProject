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
	int no = 0;
	

	scanf("%s", str);


	for (i = 0; i < 100; i++)
	{
		if (str[i] == 'c')
		{
			printf("Yes ");
			no++;
		}		
	}
	if (no == 0)
	{
		printf("No ");
	}

	no = 0;
	for (j = 0; j < 100; j++)
	{
		if (str[j] == 'a' && str[j + 1] == 'b')
		{
			printf("Yes ");
			no++;
		}	
	}
	if (no == 0)
	{
		printf("No ");
	}
	





	system("pause");
	return 0;
}

