#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int a,b,c;
	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;

	printf("두 수를 입력하시오\n");
	scanf("%d%d",ptr1,ptr2);

	if (*ptr1>=*ptr2)
	{
		*ptr3 = *ptr1-*ptr2;
	}
	else
	{
		*ptr3 = *ptr2-*ptr1;
	}

	printf("%d\n",*ptr3);



	system ("pause");
	return 0;
}


