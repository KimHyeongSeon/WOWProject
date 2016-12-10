#include "stdafx.h"
#include "stdlib.h"



void main()
{

	int w,h;

	printf("당신의 키와 몸무게를 입력하세요.\n");
	scanf("%d %d", &h, &w);
	printf("비만수치는 %d입니다.\n", (w + 100 - h));
	if ((w + 100 - h) > 0)
		printf("당신은 비만이군요.\n");

}
