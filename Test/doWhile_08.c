#include "stdafx.h"
#include "stdlib.h"


void main()
{

 	int i, k;
	printf("높이를 입력하세요.\n");
	scanf("%d", &i);
	
	do
	{
		k = 1;
		do	
		{
			printf("*");
			k++;
		}
    		while (k <= i);
		i--;
		
		printf("\n");
	} 
  	while (i > 0);
    
}
