#include "stdafx.h"
#include "stdlib.h"

int main()
{
	char alphabet;

	scanf("%c", &alphabet);

	switch (alphabet)
	{
	case 'A': 
		printf("매우잘함"); 
		break;
	case 'B': 
		printf("잘함"); 
		break;
	case 'C':
		printf("보통임");
		break;
	case 'D':
		printf("노력요함");
		break;
	case 'F':
		printf("낙제");
		break;
	default :
		printf("잘못입력");
	}



	system("pause");
	return 0;
}
