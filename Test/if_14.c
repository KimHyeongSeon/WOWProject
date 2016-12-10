#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int g;
	
	printf("당신의 성적을 입력하시오.\n");
	scanf("%d", &g);
	
	if (g < 0)
	{
		printf("잘못입력하셨습니다.\n");
	}
	else if (g < 50)
	{
		printf("F\n");
	}
	else if (g < 60)
	{
		printf("E\n");
	}
	else if (g < 70)
	{
		printf("D\n");
	}
	else if (g < 80)
	{
		printf("C\n");
	}
	else if (g < 90)
	{
		printf("B\n");
	}
	else
	{
		printf("A\n");
	}

}
