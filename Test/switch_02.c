#include "stdafx.h"
#include "stdlib.h"

void main()
{
	int key, i = 0;
	char key2;
	int in[10];
	while (1)
	{
		printf("10개까지 수를 입력받아 4칙연산을 실행하는 프로그램입니다.\n");
		printf("1.입력 2.전체삭제 3.계산결과 출력 4.나가기\n");
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
			printf("수를 입력하세요.\n");
			scanf("%d", &in[i]);
			fflush(stdin);
			
			if (i != 0)
			{
				printf("사칙연산기호를 입력하세요\n");
				scanf("%c", &key2);
				if (key2 != '+' && key2 != '-' && key2 != '*' && key2 != '/')
				{
					printf("잘못입력하셨습니다.\n");
					break;
				}
				
				switch (key2)
				{
				case '+':
					in[i] = in[i - 1] + in[i];
					break;
				case '-':
					in[i] = in[i - 1] - in[i];
					break;
				case '*':
					in[i] = in[i - 1] * in[i];
					break;
				case '/':
					in[i] = in[i - 1] / in[i];
					break;
				}
			}
			i++;
			break;
		case 2:
			if (i == 0)
			{
				printf("입력된수가 없습니다.\n");
				break;
			}
			i = 0;
			break;
		case 3:
			printf("결과 : %d\n", in[i-1]);
			break;
		case 4:
			return;
		}
		system("pause");
		system("cls");
		fflush(stdin);
		}

	}		

}



