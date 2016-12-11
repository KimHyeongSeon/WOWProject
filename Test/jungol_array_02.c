
// jungol_array.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;



	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	system("pause");
    return 0;
}

