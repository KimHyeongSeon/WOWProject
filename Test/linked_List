#include"stdafx.h"
#include"stdio.h"
#include"stdlib.h"
#include"conio.h"


typedef struct node
{
	int key;
	struct node *next;
}NODE;

NODE *start = NULL;

void insert(int input);
void print();
void del();

void main()
{
	int num, input;
	while (1)
	{
		puts("MENU");
		puts("1. 삽입");
		puts("2. 삭제");
		puts("3. 출력");
		puts("4. 종료");
		printf("숫자를 입력해주세요 : ");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			printf("입력하실 숫자를 써주세요: ");
			scanf("%d", &input);
			insert(input);
			break;
		case 2:
			del();
			break;
		case 3:
			print();
			break;
		case 4:
			return;
		default:
			printf("입력범위가 아닙니다. 다시입력해주십시오\\n");
		}
	}
}
void insert(int input)
{
	NODE *newnode, *cur;
	newnode = (NODE *)malloc(sizeof(NODE));
	newnode->next = NULL;
	newnode->key = input;
	cur = start;
	if (start == NULL)
	{
		start = newnode;
		return;
	}
	else if (start->key > newnode->key)
	{
		newnode->next = start;
		start = newnode;
		return;
	}
	else
	{
		while (cur->next != NULL)
		{
			if (cur->next->key > newnode->key)
			{
				newnode->next = cur->next;
				cur->next = newnode;
				return;
			}
			cur = cur->next;
		}
	}
	cur->next = newnode;
}

void print()
{
	NODE *cur;
	cur = start;
	if (start == NULL)
	{
		printf("비어잇다!!!\\n");
		return;
	}

	while (cur->next != NULL)
	{
		printf("%d -> ", cur->key);
		cur = cur->next;
	}
	printf("%d \\n", cur->key);
}

void del()
{
	NODE *cur, *del;
	int num;
	cur = start;
	printf("제거하시고자하는 숫자를 입력해주세요 : ");
	scanf("%d", &num);
	if (start == NULL)
	{
		printf("지울값이 없습니다.");
		return;
	}

	if (start->key == num)
	{
		del = start;
		start = start->next;
		printf("%d를 삭제하였습니다.\\n", del->key);
		free(del);
		return;
	}
	else
	{
		while (cur->next != NULL)
		{
			if (cur->next->key == num)
			{
				del = cur->next;
				cur->next = cur->next->next;
				printf("%d를삭제 하였습니다.\\n", del->key);
				free(del);
				return;
			}
			cur = cur->next;
		}
	}
	printf("삭제하려는 숫자를 발견하지 못했습니다. \\n");
}
