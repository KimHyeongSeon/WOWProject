
#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i, j;

	for (i = 1; i < 10; i++)
	{
		j = 7;
		printf("%d * %d = %d\n", j, i, j*i);
	}



	system("pause");
	return 0;
}

