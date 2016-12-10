#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int key=1, i = 0, j;
	int in[10];
	while (key != 4)
	{
		printf("10개까지 수를 입력받고 출력하는 프로그램입니다.\n");
		printf("1.입력 2.입력된수출력 3.삭제 4.나가기\n");
		scanf("%d", &key);
		if (key != 1 && key != 2 && key != 3 && key != 4)
		{
			printf("잘못입력하셨습니다.\n");
			return;
		}
		switch (key)
		{
		case 1:
			if (i == 10)
			{
				printf("꽉찼습니다.\n");
				break;
			}
			printf("%d번째 수를 입력 : ", i+1);
			scanf("%d", &in[i]);
			i++;
			break;
		case 2:
			if (i == 0)
			{
				printf("입력된수가 없습니다.\n");
				break;
			}
			for (j = 0; j < i; j++)
			{
				printf("%d번째 수 : %d\n",j+1, in[j]);
			}
			break;
		case 3:
			if (i == 0)
				printf("입력된 수가 없습니다.\n");
			else
			{
				printf("가장 최근의 수를 삭제합니다.\n");
				i--;
			}
			break;
		case 4:
			return;
		}
		system("pause");
		system("cls");
		fflush(stdin);
	}

}



