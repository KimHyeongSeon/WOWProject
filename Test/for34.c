#include<stdio.h>

int main(void)
{	
	struct sungjuk
	{			
		char f[10];
		int a,b,c;
	};
	
	struct sungjuk st;
	int g,e;
	scanf("%s",&(O,X?)st.f);
	scanf("%d",&st.a);
	scanf("%d",&st.b);
	scanf("%d",&st.c);
	
	g=st.a+st.b+st.c;
	e=g/3;

	printf("이름 : %s\n국어 : %d\n수학 : %d\n영어 : %d\n총점 : %d\n평균 : %d", st.f,st.a,st.b,st.c,g,e);
}
