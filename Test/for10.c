#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int i,j;
	printf("자연수를 입력하시오.\n");
	scanf("%d", &j);
	for (i = 1; i <= j; i++)
		printf("%d ", i);
	printf("\n");
}
