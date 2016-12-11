
#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int i = 0;
	char arr[10] = {};

	for (i = 0; i < 10; i++)
	{
		scanf(" %c", &arr[i]);
	}

	printf("%c %c %c", arr[0], arr[3], arr[6]);



	system("pause");
	return 0;
}
