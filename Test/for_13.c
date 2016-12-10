#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int h, p, i;
	printf("높이를 입력하세요.\n");
	scanf("%d", &h);
	if (h <= 0)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	for (p = 1; p <= h; p++)
	{
		for (i = 1; i <= p; i++)
			printf("*");
		printf("\n");
	}
}
