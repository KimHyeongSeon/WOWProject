#include "stdafx.h"
#include "stdlib.h"

int pow(int x, int y)
{
	int i = 0;
	int avr = 1;

	for (i = 0; i < y; i++)
	{
		avr *= x;
	}

	printf("%d", avr);

	return 0;
}


int main()
{
	int num = 0;
	int square = 0;

	scanf("%d", &num);
	scanf("%d", &square);

	pow(num, square);





	system("pause");
	return 0;
}
