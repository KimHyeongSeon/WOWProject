#include "stdafx.h"
#include "stdlib.h"

int main()
{
	char arr[10] = {};
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		scanf(" %c", &arr[i]);
	}

	for (j = 9; j >= 0; j--)
	{
		printf("%c ", arr[j]);
	}





	system("pause");
	return 0;
}
