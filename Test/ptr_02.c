#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	int *ptr = &a;

	printf("정수를 입력하시오 : \n");
	scanf("%d",ptr);

	printf("%d...%d\n",(*ptr)/10,(*ptr)%10);


	system("pause");
	return 0;
}

