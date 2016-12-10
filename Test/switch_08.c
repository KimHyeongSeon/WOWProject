#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int key;
	printf("1.10출력 2.100출력 3.1000출력 4.100000출력\n");
	scanf("%d", &key);
	if (key != 1 && key != 2 && key != 3 && key != 4)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	switch (key)
	{
	case 1:
		printf("10\n");
		break;
	case 2:
		printf("100\n");
		break;
	case 3:
		printf("1000\n");
		break;
	case 4:
		printf("10000\n");
		break;
	}
}
