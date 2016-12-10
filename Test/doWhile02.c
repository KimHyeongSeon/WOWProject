#include "stdafx.h"
#include "stdlib.h"

void main(void)
{
	int i = 1, k;
	printf("10층짜리 하노이타워를 출력하는 프로그램입니다.\n");
	do{
		k = 1;
		do{
			printf("*");
			k++;
		} while (k <= i);
		printf("\n");
		i++;
	} while (i <= 10);
}
