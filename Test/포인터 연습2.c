#include "stdlib.h"
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int num-10;
	int * ptr1=&num;
	int * ptr2=ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);

	system("pause");
	return 0;
}
