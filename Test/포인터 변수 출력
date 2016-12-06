#include "stdlib.h"
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int num1=10, num2=20;
	int * ptr1=&num1;
	int * ptr2=&num2;
	int * temp;
	(*ptr1)+=10;
	(*ptr2)-=10;

	temp=ptr1;
	ptr1=ptr2;
	ptr2=temp;

	printf("%d %d \n", *ptr1, *ptr2);
	system("pause");
	return 0;
}
