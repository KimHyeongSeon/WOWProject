#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	int *ptr1 = &a;
	double b;
	double *ptr2 = &b;
	
	*ptr1 = 3;
	*ptr2 = 5.89;

	printf("%d %d",ptr1,ptr2);


	system ("pause");
	return 0;
}
