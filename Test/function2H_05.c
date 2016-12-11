#include "stdafx.h"
#include "stdlib.h"
#include "math.h"


int main()
{
	double num[3] = {};
	double fsum = 0.0;
	int i = 0;
	int isum = 0;

	for (i = 0; i < 3; i++)
	{
		scanf("%lf", &num[i]);
		fsum += num[i];		
		isum += ceil(num[i]);
	}

	printf("%d\n%d", (int)fsum / 3, isum/3);


	system("pause");
	return 0;
}
