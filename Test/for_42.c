
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
		}
	}
	
	for(i =0; i<3; i++)
	{
		for(j=0; j<i+1;j++)
		{
		printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
