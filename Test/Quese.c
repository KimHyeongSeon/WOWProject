// 20161005.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdlib.h"
#define N 8
char Q[N] = { NULL };
int front = 0;
int rear = 0;


void enQ(char a);
int deQ();
void print();
int main()
{
	int num = 0;
	char chr = ' ';

	while (1)
	{
		printf("수행할 작업을 선택하시오\n");
		printf("1. 삽입\n");
		printf("2. 삭제\n");
		printf("3. 출력\n");
		printf("4. 종료\n");

		scanf("%d", &num);

		switch (num)
		{
		case 1:
			printf("삽입하실 문자를 넣어주세요\n");
			scanf(" %c", &chr);
			enQ(chr);
			break;
		case 2:
			deQ();
			break;
		case 3:
			print();
			break;
		case 4:
			return 0;
		default:
			printf("수행할 수 없는 작업입니다. 다시 입력해주시기 바랍니다.\n");
		
		}
	}




	system("pause");
	return 0;
}

void enQ(char a)
{
	if ((rear + 1) % N == front)
	{
		printf("Queue is full!!\n");
		return;
	}
	Q[rear] = a;
	rear = (rear + 1) % N;
}

int deQ()
{
	if (rear == front)
	{
		printf("Queue is empty!!!\n");
		return 1;
	}
	Q[front] = NULL;
	front = (front + 1) % N;

	return front;
}

void print()
{
	int count = front;
	while (1)
	{
		if (Q[count % N] == NULL)
		{
			break;
		}
		printf("%c", Q[count % N]);
		count++;
	}
	printf("\n");
	

}
