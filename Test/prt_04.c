#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int rea[5];
	int a;
	int *ptr = rea;


	printf("5개의 정수를 입력하시오 :\n");
	for (a = 0; a<5; a++)
	{
		scanf ("%d",(ptr+a));
	}

	for (a = 0; a<5; a++)
	{
		if (a%2==0)
		{
			printf("%d ",*(ptr+a));
		}
	}
	

	system("pause");
	return 0;
}
