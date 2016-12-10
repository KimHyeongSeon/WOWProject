#include "stdafx.h"
#include "stdlib.h"



void main()

{
	float a, b;
	char key='Y';
	while (key == 'Y')
	{
		printf("높이를 입력하세요.\n");
		scanf("%f", &a);
		printf("밑변을 입력하세요.\n");
		scanf("%f", &b);
		printf("삼각형의 넓이는 %f 입니다.\n", a*b / 2);
		fflush(stdin);
		printf("계속하시겠습니까?(Y/N)\n");
		key = getchar();
	}
}
