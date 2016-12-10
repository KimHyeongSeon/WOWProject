#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int y;
	printf("년도를 입력하세요.\n");
	scanf("%d", &y);
	if (y % 4 == 0)
		printf("윤년입니다.\n");
	else
		printf("%d 년 후에 윤년입니다.\n", 4-(y % 4));
}
