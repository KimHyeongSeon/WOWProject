#include "stdafx.h"
#include"stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int height, weight;

	printf("몸무게와 키를 입력하세요\n");
	scanf_s("%d%d", &height,&weight);

	if ((height - 100) * 1.1 <= weight)
	{
		printf("당신은 과체중입니다.\n");
	}
	else if ((height - 100) * 0.7 >=weight)
	{
		printf("당신은 저체중입니다.\n");
	}
	else
	{
		printf("당신은 표준체중입니다.\n");
	}

	system("pause");
	return 0;
}

