#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int a;

	while (1)
	{
		printf("1. 대한민국\n");
		printf("2. 미국\n");
		printf("3. 일본\n");
		printf("4. 중국\n");
		printf("수도를 알고 싶은 나라는 몇 번입니까? \n");

		scanf("%d", &a);

		if (a == 1)
		{
			printf("서울\n\n");
		}
		else if (a == 2)
		{
			printf("워싱턴\n\n");
		}
		else if (a == 3)
		{
			printf("동경\n\n");
		}
		else if (a == 4)
		{
			printf("북경\n\n");
		}
		else
		{
			printf("해당하는 나라가 없습니다.");
			break;
		}
	}




	system("pause");
	return 0;
}
