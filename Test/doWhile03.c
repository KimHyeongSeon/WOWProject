
#include "stdafx.h"
#include "stdlib.h"

void main(void)
{
	int i = 1, result = 1;
	do
  {
		result = result * i;
		i++;
	} 
  while (i <= 10);
  
	printf("1~10까지의 곱은 %d 입니다.\n", result);
}
