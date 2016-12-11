// IF-8.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int battery;

	printf("스마트폰 배터리 잔량을 알려주세요 >> ");
	scanf_s("%d", &battery);

	if (battery>= 70)
	{
		printf("배터리가 충분합니다.\n");
	}
	else if (battery < 70 && battery >= 40)
	{
		printf("배터리가 부족하진 않습니다.\n");
	}
	else
	{
		printf("베터리 잔량이 적습니다... 충전을 해주세요\n");
	}
	system("pause");
	return 0;
}

