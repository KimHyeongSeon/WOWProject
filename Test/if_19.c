#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int m;
	
	printf("1~12중 숫자 1개를 입력하시오.\n");
	scanf("%d", &m);
	
	if (m < 1 || m>12)
	{
		printf("잘못입력하셨습니다.\n");
	}
	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		printf("%d 월은 31일까지 있습니다.\n", m);
	}
	else if (m == 2)
	{
		printf("2월은 28일까지 있습니다.\n");
	}
	else
	{
		printf("%d월은 30일까지 있습니다.\n",m);
	}
}
