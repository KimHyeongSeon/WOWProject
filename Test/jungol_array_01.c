#include "stdafx.h"
#include "stdlib.h"

int main()
{
	char arr[10] = {};
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf(" %c", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%c", arr[i]);
	}

	system("pause");
	return 0;
}
