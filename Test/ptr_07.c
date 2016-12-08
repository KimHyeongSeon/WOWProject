#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int a,b;
	int *ptr = &b;

	printf("100이하의 수를 입력하시오 : ");
	scanf("%d",ptr);

	if ((*ptr) <=100)
	{
		for (a = 0; a<(*ptr); a++)
		{
			printf("*");
		}
	}

	system ("pause");
	return 0;
}

