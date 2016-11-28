
#include "stdafx.h"
#include "stdlib.h"
#define N 100

char S[N] = {};
int top = -1;

void push(char c);
char pop();

int main()
{


	system("pause");
	return 0;
}

void push(char c)
{
	top++;
	S[top] = c;
}

char pop()
{
	return top--;
}
