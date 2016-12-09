#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int input = 1;
	char alphabet = 'A'; //아스키 코드 65 = A

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i; j++)
		{
			printf("%d ", input);
			input++;
		}
		for (k = 0; k < i + 1; k++)
		{
			printf("%c ", alphabet);
			alphabet++;
		}
		printf("\n");
	}



	system("pause");
	return 0;
}
