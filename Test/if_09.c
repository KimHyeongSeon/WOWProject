#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a;

	printf("정수를 입력하세요. ");
	scanf("%d",&a);

	if (a>0)
	{
		printf("양수입니다.");
	}
	else if (a<0)
	{
		printf("음수입니다.");
	}
	else
	{
		return 0;
	}


	system("pause");
	return 0;
}
