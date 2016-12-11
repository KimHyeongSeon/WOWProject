#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int score;
	int type;
	printf("면허 시험 종류선택(1 [1종], 2 [2종] 입력>> ");
	scanf_s("%d", &type);
	if (type == 1){
		printf("필기 면허시험 점수 입력 : ");
		scanf_s("%d", &score); //1,2종 외에 나른 숫자가 들어갔을 때에 표시 되지 않도록 수정
		if (score >= 70)
			printf("1종 면허 시험 합격\n");
		else
			printf("1종 면허 시험 불합격\n");
	}
	else if (type == 2){
		scanf_s("%d", &score);
		printf("필기 면허시험 점수 입력 : ");
		if (score >= 70)
			printf("2종 면허 시험 합격\n");
		else
			printf("2종 면허 시험 불합격\n");
	}
	else
		printf("면허 시험이 존재하지 않습니다");


	system("pause");
	return 0;
}
