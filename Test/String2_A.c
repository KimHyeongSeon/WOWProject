#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char str[100] = {};

	scanf("%s", &str);

	printf("%d\n", atoi(str) * 2);
	printf("%.2f", atof(str));





	system("pause");
	return 0;
}
