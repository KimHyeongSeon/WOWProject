#include<stdio.h>

void main()
{
	int n,d;
	struct sungjuk
	{
		char a[10];
		int e,f,g;
	};
	struct sungjuk st, *ptr;
	ptr=&st;
	scanf("%s",ptr->a);
	scanf("%d",&ptr->e);
	scanf("%d",&ptr->f);
	scanf("%d",&ptr->g);

	n=ptr->e+ptr->f+ptr->g;
	d=n/3;

	printf("국어 : %d, 수학 : %d, 영어 : %d , 이름 : %s\n", ptr->e,ptr->f,ptr->g,ptr->a);
	printf("총점 : %d , 평균 : %d",n,d);
}
