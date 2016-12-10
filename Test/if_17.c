#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int x, y;
	
	printf("두 정수를 입력하세요.\n");
	scanf("%d %d", &x, &y);
	
	if (x >= y)
	{
		printf("두값의 차는 %d 입니다.\n", x - y);
	}
	else
	{
		printf("두값의 차는 %d 입니다.\n", y - x);
	}
}
