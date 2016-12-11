#include "stdafx.h"
#include "stdlib.h"

void GetSumProduct(int a, int b, int sum, int product);

int _tmain(int argc, _TCHAR* argv[])
{
	int menu;

	do
	{
		printf("\n");
		printf("-----메뉴 선택 ----\n");
		printf("1. 짜장면\n");
		printf("2. 짬뽕\n");
		printf("3. 짬짜면\n");
		printf("4. 볶음밥\n");
		printf("메뉴를 선택하시오\n");

		scanf("%d", &menu);
	} while (menu < 1 || 4 < menu);
	printf("메뉴 %d번을 입력하였습니다.", menu);



	system("pause");
	return 0;
}


