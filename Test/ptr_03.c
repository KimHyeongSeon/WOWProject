

#include "stdafx.h"
#include "stdlib.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int a,b;
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	printf("두 수를 입력하시오 : \n");
	scanf("%d %d",ptr1,ptr2);

	printf("%d + %d = %d\n",*ptr1,*ptr2,(*ptr1)+(*ptr2));
	printf("%d - %d = %d\n",*ptr1,*ptr2,(*ptr1)-(*ptr2));
	printf("%d * %d = %d\n",*ptr1,*ptr2,(*ptr1)*(*ptr2));
	printf("%d / %d = %d\n",*ptr1,*ptr2,(*ptr1)/(*ptr2));

	

	system("pause");
	return 0;
}



