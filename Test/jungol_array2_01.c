#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int arr[100] = {};
	char alphabet = ' ';
	int i = 0;
	int j = 0;

	for (i = 0; i < 100; i++)
	{
		scanf(" %c", &alphabet);

		if (alphabet < 65 || alphabet > 90)
		{
			break;
		}
		arr[alphabet - 65]++;
	}

	for (j = 0; j < 26; j++)
	{
		if (arr[j] > 0)
		{
			printf("%c : %d개\n", j + 65, arr[j]);
		}
	}




	system("pause");
	return 0;
}
