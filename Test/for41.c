
#include<stdio.h>

int main(void)
{
	int b[4][3], i,j, c=1;

	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]= c;
			c++;
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

