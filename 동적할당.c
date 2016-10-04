#include <stdio.h>
#include <stdlib.h>
int main(void)
{
		int i=0;
		
		int* p=(int*) malloc(sizeof(int)*2);		// 8바이트 동적 메모리 할당
		p[0]=10;
		p[1]=20;
			
		p=(int*) realloc(p, sizeof(int)*1);		// 4바이트로 재할당(이전보다 4바이트만큼 축소됨)
			p[0]=30;
		
		for(i=0; i<2; i++)
			printf("p[%d] : %d \n", i, p[i]);
				
		free(p);
			p=NULL;
		
		return 0;
    }
