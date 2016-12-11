
// functhion.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"

void letter()
{
	printf("~!@#$^&*()_+|\n");
}

int main()
{
	int i = 0;
	int num = 0;;

	scanf("%d", &num);

	for (i = 0; i < num; i++) 
	{
		letter();
	}



	system("pause");
    return 0;
}

