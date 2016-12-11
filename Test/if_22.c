
#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int temp;

	printf("오늘의 기온을 입력해주세요!\n");
	scanf_s("%d",&temp);

	if (temp > 23)
		printf("오늘의 기온은 %d도로 더운 날씨입니다.\n",temp);
	else if (temp < 8)
		printf("오늘의 기온은 %d도로 추운 날씨입니다.\n", temp);
	else
		printf("오늘의 기온은 %d도로 쾌적한 날씨입니다.\n", temp);

	system("pause");
	return 0;
}

