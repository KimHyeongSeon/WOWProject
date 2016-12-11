#include "stdafx.h"
#include "stdlib.h"

void call()
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("@");
	}
	printf("\n");
}

int main()
{
	printf("첫 번째\n");
	call();
	printf("두 번째\n");
	call();
	printf("세 번째\n");
	call();





	system("pause");
	return 0;
}
