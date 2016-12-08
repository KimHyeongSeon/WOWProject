#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	printf("실수 5개를 입력하시오 : \n");

	double rea[5];
	double *ptr = rea;
	int a;

	for (a = 0; a<5; a++)
	{
	scanf ("%lf",(ptr+a));
	}

	for (a = 0; a<5; a++)
	{
	printf ("%.1lf ",*(ptr+a));
	}
	printf ("\n");
	

	system ("pause");
	return 0;
}


