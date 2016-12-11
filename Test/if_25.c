#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int phone;
	printf("당신의 핸드폰 기종은 무엇입니까?\n 1=아이폰, 2=블랙베리, 3=갤럭시, 4=옵티머스, 5=베가, 6=엑스페리아\n");
	scanf_s("%d", &phone);
	
	if (phone ==1)
	{	
		printf("당신은 아이폰 유저시군요!\n");
	}
	else if (phone == 2)
	{
		printf("당신은 블랙베리 유저시군요!\n");
	}
	else if (phone == 3 || phone == 4 || phone == 5||phone==6)
	{
		printf("당신은 안드로이드 유저시군요!\n");
	}
	else
	{
		printf("목록에 없는 기종입니다... 나중에 추가하도록 하겠습니다.\n");
	}
	
	
	system("pause");
	return 0;
}
