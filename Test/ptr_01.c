#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	int *ptr;
	
	ptr = &a;

	printf("정수를 입력하시오. \n");
	scanf("%d",&a);

	printf("변수 a의 주소값 : %#p\n",a);
	printf("데이터값 : %d입니다.\n",*ptr);

	system("pause");
	return 0;
}


