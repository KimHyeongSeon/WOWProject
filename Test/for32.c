#include<stdio.h>

main(void)
{
	char f[10];
	int a,b,c;}h;
	h student[3];
	int i,z,x;
	for(i=0;i<=2;i++)
	{
		printf("%d번째 학생이름\n", i+1);
		scanf("%s", student[i].f);
		printf("%d번째 국어점수\n", i+1);
		scanf("%d", &student[i].a);
		printf("%d번째 수학점수\n", i+1);
		scanf("%d", &student[i].b);
		printf("%d번째 영어점수\n", i+1);
		scanf("%d", &student[i].c);
		z=student[i].a+student[i].b+student[i].c;
		x=z/3;
		printf("이름 : %s , 국어 : %d , 수학 : %d , 영어 : %d\n", student[i].f,student[i].a,student[i].b,student[i].c);
		printf("총점 : %d , 평균 : %d\n", z,x);
	}
}
