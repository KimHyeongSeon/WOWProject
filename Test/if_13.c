#include "stdafx.h"
#include "stdlib.h"



void main()
{

	int a;
	printf("당신의 나이를 입력하세요.\n");
	scanf("%d", &a);
	if (a >= 20)
		printf("성인입니다.\n");
	else
		printf("당신은 %d년 후에 성인이 됩니다.\n", 20 - a);

}
