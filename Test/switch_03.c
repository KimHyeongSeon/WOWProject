#include "stdafx.h"
#include "stdlib.h"

void main()
{
	int key, i, j;
	
	
	printf("높이를 입력하세요.\n");
	scanf("%d", &i);	
	printf("밑변을 입력하세요.\n");
	scanf("%d", &j);	
	printf("1.삼각형의 넓이 2.사각형넓이\n");
	scanf("%d", &key);
	
	if (key != 1 && key != 2)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	
	switch (key)
	{
		case 1:
			printf("삼각형의 넓이는 %d 입니다.", i*j / 2);
			break;
		case 2:
			printf("사각형의 넓이는 %d 입니다.", i*j);
			break;
	}
}



