#include "stdafx.h"
#include "stdlib.h"



void main()
{


	int i;

	printf("정수를 입력하세요\n");
	scanf("%d", &i);
	if (i > 0)
		printf("양의 정수입니다.\n");
	else if (i < 0)
		printf("음의 정수입니다.\n");
	else
		printf("0입니다.\n");




}
