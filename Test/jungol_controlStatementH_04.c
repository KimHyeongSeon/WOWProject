 
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int x;

	printf("1. 개\n2. 고양이\n3. 병아리\n영어로 알고 싶은 번호를 입력하세요. ");
	scanf("%d", &x);

	switch (x)
	{
	case 1: printf("dog"); break;
	case 2: printf("cat"); break;
	case 3: printf("chick"); break;
	default: printf("I don't know.");
	}




	system("pause");
	return 0;
}
