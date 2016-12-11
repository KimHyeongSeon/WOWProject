#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int year;

	printf("당신은 몇 년생입니까? : ");
	scanf_s("%d", &year);                   //성인판별 프로그램

	if (year>1995)
	{	
		printf("당신은 만19세 미만 미성인입니다\n");
	}
	else
	{
		printf("당신은 만19세 이상 성인입니다.\n");
	}
	
	
	system("pause");
	return 0;
}
