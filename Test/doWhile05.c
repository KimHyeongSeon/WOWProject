
#include "stdlib.h"
#include "stdafx.h"

void doWhile5(void)
{
	int i = 1, result = 0;
	do
  {
		result += i;
		i++;
	} 
  while (i<=100);
  
	printf("1`100까지의 합은 %d입니다.\n", result);
}
