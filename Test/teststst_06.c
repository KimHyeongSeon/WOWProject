// ConsoleApplication6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"

int main()
{
	double x;
	double y;
	char z;

	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%c", &z);

	printf("%.2lf\n", x);
	printf("%.2lf\n", y);
	printf("%c", z);

	
	system("pause");
    return 0;
}

