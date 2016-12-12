#include<stdio.h>

int punc(int c)
{
	static int num=0;
	if(c=='.'|| c=='!' || c=='?')
		num++;
	return num;
}
void main()
{
	int c, cnt;
	while((c=getchar()) != EOF)
		cnt = punc(c);
	printf("총 개수 = %d\n", cnt);
}

static은 정적변수이여서 함수에서 프로그래밍이 종료되어도
그 값을 저장하지만

static을 삭제하게 되면 정적변수가아닌 지역변수가 되어버리므로
프로그래밍이 종료된다면 그 값이 다 날아가서 총개수가 무조건 0개가된다
