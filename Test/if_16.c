#include "stdafx.h"
#include "stdlib.h"



void main()
{
	int kg, mg, eg,cg;
	
	printf("국어,수학,영어,컴퓨터과목 성적을 입력하시오.\n");
	scanf("%d %d %d %d", &kg, &mg, &eg,&cg);
	
	printf("총점 : %d\n평균 : %d\n",kg+mg+eg+cg,(kg+mg+eg+cg)/4);
	if (((kg + mg + eg + cg) / 4) > 75)
	{
		printf("장학금을 받을수있습니다.\n");
	}

}
