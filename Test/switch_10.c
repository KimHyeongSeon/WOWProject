#include "stdafx.h"
#include "stdlib.h"



void main()

{
	int key;
	printf("안녕하세요\n1.영어 2.독어 3.불어 4.일본어\n");
	scanf("%d", &key);
	if (key != 1 && key != 2 && key != 3 && key != 4)
	{
		printf("잘못입력하셨습니다.\n");
		return;
	}
	switch (key)
	{
	case 1:
		printf("Hello\n");
		break;
	case 2:
		printf("Guten Tag\n");
		break;
	case 3:
		printf("Bonjour\n");
		break;
	case 4:
		printf("こんにちは\n");
		break;
	}
}
