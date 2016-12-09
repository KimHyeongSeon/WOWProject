#include "stdafx.h"
#include "stdlib.h"

int main()
{
	double yard;
	double cm;

	printf("몇 야드인지 입력하시오. ");
	scanf("%lf", &yard);

	printf("%.1lf야드 = %.1lfcm\n", yard, yard*91.44);




	system("pause");
	return 0;
}
