#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int i ,j;

	for(i=2;i<5;i++)
	{
		for(j=1;j<6;j++)
		{
			printf("%-2d * %2d = %2d    ",i,j,i*j);
		}
	}

	system("pause");
	return 0;
}
