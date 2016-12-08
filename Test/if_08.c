 
#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])

{
	double grade;

	printf("평점은??>");
	scanf("%lf",&grade);

	switch((int)grade)
	{
		case 4 : printf("장학금을 받아가세요."); break;
		case 3 : printf("다음 학기를 준비하세요."); break;
		case 2 : printf("계절 학기에 등록하세요."); break;
		default : printf("다음 학기에 재수강하세요.");
	}


	system ("pause");
	return 0;
}
