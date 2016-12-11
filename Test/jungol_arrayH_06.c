#include "stdafx.h"
#include "stdlib.h"

int main()
{
	char arr[6] = { 'J' , 'U' , 'N' , 'G' , 'O' , 'L' };
	char alphabet = {};

	scanf(" %c", &alphabet);

	switch (alphabet)
	{
	case 'J': printf("0"); break;
	case 'U': printf("1"); break;
	case 'N': printf("2"); break;
	case 'G': printf("3"); break;
	case 'O': printf("4"); break;
	case 'L': printf("5"); break;
	default: printf("없는 문자입니다.");
	}





	system("pause");
	return 0;
}
